#include "FileIO.h"
#include <iomanip>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>
#include <sstream>

#include "Constants.h"
#include "Room.h"
#include "User.h"

namespace fs = std::filesystem;
using namespace std;
// Definition of bookings and numBookings
Booking* bookings = nullptr;
int numBookings = 0;

Room* rooms = nullptr;
int numRooms = 0;

vector<User> users;

User active_user;

string last_login;

bool FileIO::readFromJsonFile(const string& filePath, json& jsonData) {
	ifstream file(filePath);
	if (!file.is_open()) {
		cerr << "Error: File '" << filePath << "' not found!" << endl;
		return false;
	}

	// Read JSON data from file
	try {
		file >> jsonData;
	}
	catch (const exception& e) {
		cerr << "Error reading JSON from file: " << e.what() << endl;
		return false;
	}

	file.close();
	return true;
}

bool FileIO::writeToJsonFile(const string& filePath, const json& jsonData) {
	// Check if directory exists, create it if it doesn't
	fs::path dirPath = fs::path(filePath).parent_path();
	if (!fs::exists(dirPath)) {
		if (!fs::create_directories(dirPath)) {
			cerr << "Error: Unable to create directory '" << dirPath << "'!" << endl;
			return false;
		}
	}

	// Open file for writing
	ofstream file(filePath);
	if (!file.is_open()) {
		cerr << "Error: Unable to create file '" << filePath << "'!" << endl;
		return false;
	}

	// Write JSON data to file
	try {
		file << setw(4) << jsonData;
	}
	catch (const exception& e) {
		cerr << "Error writing JSON to file: " << e.what() << endl;
		return false;
	}

	// Close file
	file.close();
	return true;
}

bool FileIO::deleteFile(const std::string& filePath)
{
	const char* filename = filePath.c_str();

	if (std::remove(filename) == 0) {
		// File deletion succeeded
		return true;
	}
	else {
		// File deletion failed
		return false;
	}
}

std::time_t stringToTime(const std::string& timestamp) {
	std::tm tm = {};
	std::istringstream ss(timestamp);
	ss >> std::get_time(&tm, "%Y-%m-%d %H:%M");
	return std::mktime(&tm);
}

// Function to check if the cancel_at timestamp has exceeded 30 days from the current time
bool isCancelAtExpired(const std::string& cancelAt) {
	std::time_t cancelAtTime = stringToTime(cancelAt);
	auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	// Calculate the difference in seconds between cancelAtTime and the current time
	std::chrono::seconds difference = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::from_time_t(currentTime) - std::chrono::system_clock::from_time_t(cancelAtTime));

	// Calculate the number of days
	int days = difference.count() / (60 * 60 * 24); // Convert seconds to days

	// Check if the cancel_at timestamp has exceeded 30 days from the current time
	return (days >= 30);
}

bool FileIO::loadUsersData(const json& jsonData)
{
	for (auto& user : jsonData.items()) { // Iterate over key-value pairs
		const string& userId = user.key(); // Get the user ID (key of the item)

		User newUser;
		newUser.id = userId; // Set the user ID

		const json& userData = user.value(); // Get the user data (value of the item)

		// Populate user fields
		newUser.username = userData["username"];
		newUser.password = userData["password"];
		newUser.name = userData["name"];
		newUser.email = userData["email"];
		newUser.phone = userData["phone"];
		newUser.age = userData["age"];
		newUser.user_type = userData["user_type"];

		users.push_back(newUser);
	}
	return true;
}

bool FileIO::loadRoomsData(const json& jsonData)
{
	// Calculate the number of rooms in the JSON data
	numRooms = jsonData.size();
	rooms = new Room[numRooms];

	// Index to keep track of the current room in the array
	int index = 0;

	for (auto it = jsonData.begin(); it != jsonData.end(); ++it) {
		const string& roomId = it.key(); // Get the room ID from the JSON key

		// Access the JSON object corresponding to the room
		const json& room = it.value();

		rooms[index].id = roomId;
		rooms[index].status.available = room["status"]["available"];
		rooms[index].info.Description = room["info"]["Description"];
		rooms[index].info.roomType = room["info"]["roomType"];
		rooms[index].info.floor = room["info"]["floor"];
		rooms[index].info.price = room["info"]["price"];
		rooms[index].info.roomNumber = room["info"]["roomNumber"];

		// Reset all the elements inside array to true
		for (int i = 0; i < 7; ++i) {
			for (int j = 0; j < 3; ++j) {
				rooms[index].status.availability[i][j] = true;
			}
		}

		++index;
	}

	return true;
}

int FileIO::loadBookingsData(const json& bookingsData) {
	try {
		numBookings = bookingsData.size();
		bookings = new Booking[numBookings];

		int index = 0;
		for (auto it = bookingsData.begin(); it != bookingsData.end(); ++it) {
			const string& bookingId = it.key();

			const json& booking = it.value();

			if (active_user.user_type == 0 || (active_user.user_type == 1 && (booking["status"]["active"] || !isCancelAtExpired(booking["status"]["cancel_at"]))))
			{
				bookings[index].id = bookingId;
				bookings[index].room_id = booking["room_id"];
				bookings[index].user_id = booking["user_id"];
				bookings[index].status.active = booking["status"]["active"];
				bookings[index].status.cancel_at = !booking["status"]["cancel_at"].is_null() ? booking["status"]["cancel_at"] : "";
				bookings[index].period.from = booking["period"]["from"];
				bookings[index].period.to = booking["period"]["to"];
				for (size_t i = 0; i < numRooms; ++i) {
					// Access the current room using array notation
					Room& room = rooms[i];

					if (std::stoi(room.id) == booking["room_id"]) {
						for (int day = 1; day <= 7; ++day) {
							for (int timeOfDay = 1; timeOfDay <= 3; ++timeOfDay) {
								int i = (day * 10) + timeOfDay;

								if (i >= booking["period"]["from"] && i <= booking["period"]["to"]) {
									// Update availability array
									room.status.availability[day - 1][timeOfDay - 1] = false;
								}
							}
						}
						break; // Exit the loop once the room is found and updated
					}
				}

				index++;
			}
		}

		return true;
	}
	catch (const std::exception& e) {
		cerr << "Error loading bookings data: " << e.what() << endl;
		return false;
	}
}

int FileIO::loadSession(const json& sessionData)
{
	if (!(sessionData.contains("user_id") && sessionData.contains("last_login")))
	{
		return 300;
	}

	bool userFound = false; // Flag to indicate if the active user was found

	for (auto& user : users) {
		if (user.id == sessionData["user_id"]) {
			active_user.id = user.id;
			active_user.username = user.username;
			active_user.password = user.password;
			active_user.name = user.name;
			active_user.email = user.email;
			active_user.phone = user.phone;
			active_user.age = user.age;
			active_user.user_type = user.user_type;

			last_login = sessionData["last_login"].get<string>();
			userFound = true;
			break;
		}
	}

	if (!userFound) {
		// User with the specified ID was not found
		return 304;
	}

	return 200;
}

bool FileIO::loadDatabase()
{
	// load data (if found)
	json roomsData;

	if (readFromJsonFile(ROOMS_PATH, roomsData)) {
		json bookingsData;  
		loadRoomsData(roomsData);
		if (readFromJsonFile(BOOKING_PATH, bookingsData)) {
			loadBookingsData(bookingsData);
		}
	}

	return true;
}
