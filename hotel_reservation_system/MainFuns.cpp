#include <iomanip>
#include <iostream>
#include <random>

#include "ctime"
#include <sstream>

#include "Constants.h"
#include "FileIO.h"
#include "Main.h"
#include "Room.h"
#include "User.h"

bool Main::cleanUp()
{
	// Clean up pointers used by your program
	cleanUsers();
	cleanRooms();
	cleanBookings();

	return true;
}

void Main::cleanUsers()
{
	// Deallocate memory used by users vector
	users.clear(); // Clear the vector to release memory
}

void Main::cleanRooms()
{
	// Deallocate memory used by rooms vector
	delete[] rooms;
	rooms = nullptr;
}

void Main::cleanBookings()
{
	// Deallocate memory used by bookings array
	delete[] bookings;
	bookings = nullptr;
}

string Main::getCurrentTime() {
	// Get current time
	const time_t now = time(nullptr);

	// Convert to tm struct
	tm* localTime = localtime(&now);

	// Format the time string
	stringstream ss;
	ss << put_time(localTime, "%Y-%m-%d %H:%M");
	string timeStr = ss.str();

	return timeStr;
}

int Main::getNumericUpDownValue(System::Windows::Forms::NumericUpDown^ numericUpDownControl) {
	System::Decimal value = numericUpDownControl->Value;
	return System::Decimal::ToInt32(value);
}

int Main::convertDayTimeToInt(int index)
{
	if (index < 1 || index > 21) {
		return 0; // Invalid index
	}

	int day = ((index - 1) / 3) + 1; // Calculate the day
	int timeOfDay = ((index - 1) % 3) + 1; // Calculate the time of day

	return (day * 10) + timeOfDay;
}

int Main::convertIntToDayTime(int value)
{
	if (value < 11 || value > 73 || value % 10 > 3) {
		return 0; // Invalid value
	}

	int day = ((value - 1) / 10) - 1; // Calculate the day
	int timeOfDay = ((value - 1) % 10) - 1; // Calculate the time of day

	return (day * 3) + (timeOfDay + 1);
}

bool Main::checkAvailability(int roomId, int from, int to, const string& exludedBookingId)
{
	bool isAvailable = true;

	std::pair<Booking*, int> roomBookingsPair = getBookings(roomId, false);

	Booking* roomBookings = roomBookingsPair.first;
	int numberOfBookings = roomBookingsPair.second;

	for (int i = 0; i < numberOfBookings; i++)
	{
		Booking iteratedBooking = roomBookings[i];
		if (iteratedBooking.status.active && iteratedBooking.id != exludedBookingId)
		{
			if (!(from > iteratedBooking.period.to || to < iteratedBooking.period.from))
			{
				isAvailable = false;
				break;
			}
		}
	}

	delete[] roomBookings;
	roomBookings = nullptr;
	return isAvailable;
}

std::pair<Booking*, int> Main::getBookings(const int id, const bool by) // by: 0 => room | 1 => user
{
	int bookingsNum = 0;

	// Count the number of bookings that match the room ID
	for (int i = 0; i < numBookings; i++)
	{
		const Booking& booking = bookings[i];

		if ((by ? booking.user_id : booking.room_id) == id)
		{
			bookingsNum++;
		}
	}

	Booking* foundBookings = new Booking[bookingsNum];

	int index = 0;
	for (int i = 0; i < numBookings; i++)
	{
		const Booking& booking = bookings[i];

		if ((by ? booking.user_id : booking.room_id) == id)
		{
			foundBookings[index] = booking;
			index++;
		}
	}

	return std::make_pair(foundBookings, bookingsNum);
}

Booking& Main::findBooking(const std::string& bookingId)
{
	static Booking foundBooking; // Static to ensure lifetime beyond function scope

	for (int i = 0; i < numBookings; i++)
	{
		if (bookings[i].id == bookingId)
		{
			foundBooking.id = bookings[i].id;
			foundBooking.user_id = bookings[i].user_id;
			foundBooking.period.from = bookings[i].period.from;
			foundBooking.period.to = bookings[i].period.to;
			foundBooking.status.active = bookings[i].status.active;
			foundBooking.room_id = bookings[i].room_id;
			return bookings[i];
		}
	}

	return bookings[0];
}

Room& Main::findRoom(const std::string& roomId)
{
	for (int i = 0; i < numRooms; i++)
	{
		if (rooms[i].id == roomId)
		{
			return rooms[i];
		}
	}

	return rooms[0];
}

bool Main::saveChanges()
{
	json sessionJson;
	json usersJson;
	json roomsJson;
	json bookingsJson;

	sessionJson["last_login"] = getCurrentTime();
	sessionJson["user_id"] = active_user.id;
	if (!FileIO::writeToJsonFile(SESSION_PATH, sessionJson))
	{
		cout << "Saving Session Failed" << endl;
	}

	for (User user : users)
	{
		json userData = {
			{"username", user.username},
			{"password", user.password},
			{"name", user.name},
			{"email", user.email},
			{"phone", user.phone},
			{"age", user.age},
			{"user_type", user.user_type}
		};

		usersJson[user.id] = userData;
	}

	if (!FileIO::writeToJsonFile(USERS_PATH, usersJson))
	{
		cout << "Saving Users Failed" << endl;
	}

	for (int i = 0; i < numBookings; i++)
	{
		Booking booking = bookings[i];
		json bookingData = {
			{"room_id", booking.room_id},
			{"user_id", booking.user_id},
			{"status", {
				{"active", booking.status.active},
				{"cancel_at", booking.status.cancel_at}
			}},
			{"period", {
				{"from", booking.period.from},
				{"to", booking.period.to}
			}}
		};

		bookingsJson[booking.id] = bookingData;
	}

	if (!FileIO::writeToJsonFile(BOOKING_PATH, bookingsJson))
	{
		cout << "Saving Bookings Failed" << endl;
	}

	for (int i = 0; i < numRooms; i++)
	{
		Room room = rooms[i];
		json roomData = {
			{"status", {
				{"available", room.status.available},
				{"availability", room.status.availability}
			}},
			{"info", {
				{"Description", room.info.Description},
				{"roomType", room.info.roomType},
				{"floor", room.info.floor},
				{"price", room.info.price},
				{"roomNumber", room.info.roomNumber}
			}}
		};

		roomsJson[room.id] = roomData;
	}

	if (!FileIO::writeToJsonFile(ROOMS_PATH, roomsJson))
	{
		cout << "Saving Rooms Failed" << endl;
	}

	return true;
}

bool Main::logout()
{
	active_user = User();
	FileIO::deleteFile(SESSION_PATH);
	return true;
}

string Main::convertRoomType(int roomType)
{
	switch (roomType)
	{
	case 1:
		return "Single Room";
	case 2:
		return "Double Room";
	case 3:
		return "Triple Room";
	case 4:
		return "Quad Room";
	case 5:
		return "Connecting Room";
	case 6:
		return "Deluxe Room";
	case 7:
		return "Suite";
	case 8:
		return "Junior Suite";
	case 9:
		return "Studio";
	default:
		return "Unknown Type";
	}
}

std::string generateUniqueRoomID() {
	srand(time(nullptr));

	std::string newID;

	do {
		int randomNumber = rand() % 100000 + 1;
		newID = std::to_string(randomNumber); // Convert randomNumber to string using std::to_string()

		bool exists = false;
		for (int i = 0; i < numRooms; ++i) {
			if (rooms[i].id == newID) {
				exists = true;
				break;
			}
		}

		if (!exists) {
			break;
		}
	} while (true);

	return newID;
}

bool Main::addRoom(const int number, const int type, const int floor, const int price, const string& description)
{
	// Allocate memory for a new array with one more element
	Room* newRooms = new Room[numRooms + 1];

	// Copy existing elements from the old array to the new array
	for (int i = 0; i < numRooms; ++i) {
		newRooms[i] = rooms[i];
	}

	// Create a new room object for the new element
	Room newRoom;
	newRoom.id = generateUniqueRoomID();
	newRoom.info.Description = description;
	newRoom.info.price = price;
	newRoom.info.roomNumber = number;
	newRoom.info.floor = floor;
	newRoom.info.roomType = type;
	newRoom.status.available = true;

	// Initialize availability for the new room
	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 3; ++j) {
			newRoom.status.availability[i][j] = true;
		}
	}

	newRooms[numRooms] = newRoom;
	delete[] rooms;
	rooms = newRooms;
	newRooms = nullptr;

	++numRooms;

	return true;
}

std::pair<Room*, int> Main::searchRooms(int type, int from, int to)
{
	Room* matchedRooms = new Room[numRooms];

	int numMatchedRooms = 0;

	for (int i = 0; i < numRooms; ++i)
	{
		Room& room = rooms[i];

		if ((type == 0 || room.info.roomType == type) &&
			(checkAvailability(stoi(room.id), from, to) || (from == 0 && to == 0)))
		{
			matchedRooms[numMatchedRooms++] = room;
		}
	}

	return std::make_pair(matchedRooms, numMatchedRooms);
}

std::pair<Booking*, int> Main::searchBookings(int roomNumber, int from, int to)
{
	Booking* matchingBookingsArray = new Booking[numBookings];
	int numMatchingBookings = 0;

	for (int i = 0; i < numBookings; ++i)
	{
		Room room = findRoom(to_string(bookings[i].room_id));

		if ((room.info.roomNumber == roomNumber || roomNumber == 0) && (!checkAvailability(bookings[i].room_id, from, to) || (from == 0 && to == 0)))
		{
			matchingBookingsArray[numMatchingBookings++] = bookings[i];
		}
	}

	// Resize the array to fit only the matching bookings
	if (numMatchingBookings < numBookings)
	{
		Booking* tempArray = new Booking[numMatchingBookings];

		for (int j = 0; j < numMatchingBookings; ++j)
		{
			tempArray[j] = matchingBookingsArray[j];
		}

		delete[] matchingBookingsArray;
		matchingBookingsArray = tempArray;
		tempArray = nullptr;
	}

	return std::make_pair(matchingBookingsArray, numMatchingBookings);
}

bool Main::deleteRoom(const string& roomId)
{
	std::pair<Booking*, int> roomBookingsPair = getBookings(std::stoi(roomId), false);
	Booking* roomBookings = roomBookingsPair.first;
	int numRoomBookings = roomBookingsPair.second;

	for (int i = 0; i < numRoomBookings; ++i)
	{
		if (roomBookings[i].status.active && roomBookings[i].status.cancel_at == "") {
			deleteBooking(roomBookings[i].id);
		}
	}

	delete[] roomBookings;

	// Find the index of the room to be deleted
	int roomIndex = -1;
	for (int i = 0; i < numRooms; ++i)
	{
		if (rooms[i].id == roomId)
		{
			roomIndex = i;
			break;
		}
	}

	if (roomIndex != -1)
	{
		Room* tempRooms = new Room[numRooms - 1];

		int tempIndex = 0;
		for (int i = 0; i < numRooms; ++i)
		{
			if (i != roomIndex)
			{
				tempRooms[tempIndex++] = rooms[i];
			}
		}

		delete[] rooms;
		rooms = tempRooms;
		numRooms--;

		return true;
	}

	return false;
}

bool Main::deleteBooking(const string& bookingId)
{
	int index = -1;
	for (int i = 0; i < numBookings; ++i)
	{
		if (bookings[i].id == bookingId)
		{
			index = i;
			break;
		}
	}

	if (index != -1)
	{
		Booking* newBookings = new Booking[numBookings - 1];

		int tempIndex = 0;

		for (int i = 0; i < numRooms; ++i)
		{
			if (i != index)
			{
				newBookings[tempIndex++] = bookings[i];
			}
		}

		delete[] bookings;
		bookings = newBookings;
		newBookings = nullptr;

		numBookings--;

		return true;
	}

	return false;
}

int Main::calcBookingPeriods(const string& bookingId) {
	Booking booking = findBooking(bookingId);
	int periodsNo = 0;
	// Iterate through the period range
	for (int i = booking.period.from; i <= booking.period.to; i++) {
		int timeOfDay = i % 10;

		// Check if the time of day is valid (1 for morning, 2 for afternoon, 3 for evening)
		if (timeOfDay >= 1 && timeOfDay <= 3) {
			periodsNo++;
		}
	}
	return periodsNo;
}

bool Main::cancelBooking(const string& bookingId)
{
	Booking& booking = findBooking(bookingId);
	Room& bookingRoom = findRoom(to_string(booking.room_id));
	int from = booking.period.from;
	int to = booking.period.to;


	for (int day = (from / 10); day <= (to / 10); day++)
		for (int period = 1; period <= 3; period++)
			if (day == (from / 10) && period < (from % 10))
				continue;
			else if (day == (to / 10) && period > (to % 10))
				continue;
			else
				bookingRoom.status.availability[day - 1][period - 1] = false;

	for (int day = (from / 10); day <= (to / 10); day++)
		for (int period = 1; period <= 3; period++)
			if (day == (from / 10) && period < (from % 10))
				continue;
			else if (day == (to / 10) && period > (to % 10))
				continue;
			else
				bookingRoom.status.availability[day - 1][period - 1] = true;

	booking.status.active = false;
	booking.status.cancel_at = getCurrentTime();

	return true;
}

string generateUniqueBookingID() {
	// Seed the random number generator using srand
	srand(time(nullptr));

	std::string newID;
	do {
		int randomNumber = rand() % 100000 + 1; // Generate random number between 1 and 100000

		// Convert randomNumber to string
		newID = std::to_string(randomNumber);

		// Check if the new ID already exists
		bool exists = false;
		for (int i = 0; i < numBookings; ++i) {
			if (bookings[i].id == newID) {
				exists = true;
				break;
			}
		}

		if (!exists) {
			break; // Exit the loop since a unique ID is found
		}
	} while (true); // Keep generating until a unique ID is found

	return newID;
}

bool Main::reserveBooking(const std::string& roomId, const int from, const int to)
{
	if (!checkAvailability(stoi(roomId), from, to))
	{
		return false;
	}

	Booking newBooking;
	newBooking.id = generateUniqueBookingID();
	newBooking.room_id = std::stoi(roomId);
	newBooking.user_id = stoi(active_user.id);
	newBooking.period.from = from;
	newBooking.period.to = to;
	newBooking.status.active = true;

	// Update the room's availability
	Room& room = findRoom(roomId);

	for (int day = from / 10; day <= to / 10; ++day) {
		for (int period = 1; period <= 3; ++period) {
			int i = (day * 10) + period;
			if (i >= from && i <= to) {
				room.status.availability[day - 1][period - 1] = false;
			}
		}
	}

	Booking* newBookings = new Booking[numBookings + 1];

	for (int i = 0; i < numBookings; ++i) {
		newBookings[i] = bookings[i];
	}

	newBookings[numBookings] = newBooking;

	delete[] bookings;
	bookings = newBookings;
	newBookings = nullptr;

	++numBookings;

	return true;
}

bool Main::modifyBooking(const string& roomId, const int from, const int to, string& bookingId)
{
	if (!checkAvailability(stoi(roomId), from, to, bookingId))
	{
		return false;
	}

	// Update the room's availability
	Room& room = findRoom(roomId);
	Booking& booking = findBooking(bookingId);

	for (int day = booking.period.from / 10; day <= booking.period.to / 10; ++day) {
		for (int period = 1; period <= 3; ++period) {
			int i = (day * 10) + period;
			if (i >= booking.period.from && i <= booking.period.to) {
				room.status.availability[day - 1][period - 1] = true;
			}
		}
	}

	for (int day = from / 10; day <= to / 10; ++day) {
		for (int period = 1; period <= 3; ++period) {
			int i = (day * 10) + period;
			if (i >= from && i <= to) {
				room.status.availability[day - 1][period - 1] = false;
			}
		}
	}

	booking.period.from = from;
	booking.period.to = to;

	return true;
}