#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json;

struct room
{
	int roomID;
	int roomNum;
	int roomType;
	bool availability[7][3];
	float price; //per period(morning/afternoon/evening)
};

#define size 100
room r[size];

bool checking() //checks if admin wants to keep editing
{
	string answer;//to answer whether admin wants to continue adding rooms or not
	bool process_fail;
	do
	{
		process_fail = false;
		cout << "Add more rooms?\n";
		cin >> answer;
		if (answer == "yes" || answer == "Yes")
			return true;
		else if (answer == "no" || answer == "No")
			return false;
		else
		{
			cout << "Enter answer again\n";
			process_fail = true;
		}
	} while (process_fail);
}

int addRoom(int index) //function takes the index of rooms already taken
{
	int roomsTaken = index; //to determine the number of rooms already taken and continue loop from there
	string answer; //to ask if room is booked or available for all times and days
	string room_type;

	bool keepEditing; //takes the return value of checking function
	bool process_fail;
	for (int i = roomsTaken; i < size; i++)
	{
		r[i].roomID = roomsTaken;

		for (int row = 0; row < 7; row++)
			for (int col = 0; col < 3; col++)
				r[i].availability[row][col] = true;

		do
		{
			process_fail = false;
			cout << "Enter room type(single/double): ";
			cin >> room_type;
			if (room_type == "single" || room_type == "Single" || room_type == "S")
			{
				r[i].roomType = 1;
				r[i].price = 40; //arbitrary value in dollars
				if (roomsTaken % 4 == 0)
					r[i].roomNum = 1000 + 10 * (roomsTaken / 4) + 4;
				else
					r[i].roomNum = 1000 + 10 * ((roomsTaken / 4) + 1) + (roomsTaken % 4);
			}
			else if (room_type == "double" || room_type == "Double" || room_type == "D")
			{
				r[i].roomType = 2;
				r[i].price = 70;
				if (roomsTaken % 4 == 0)
					r[i].roomNum = 2000 + 10 * (roomsTaken / 4) + 4;
				else
					r[i].roomNum = 2000 + 10 * ((roomsTaken / 4) + 1) + (roomsTaken % 4);
			}
			else
			{
				cout << "Enter type again\n";
				process_fail = true;
			}
		} while (process_fail);

		do
		{
			process_fail = false;
			cout << "Do you want to set a custom price for room? It is currently at $" << r[i].price << endl;
			cin >> answer;
			if (answer == "No" || answer == "no" || answer == "N")
				cout << "room price set to $" << r[i].price << endl;
			else if (answer == "Yes" || answer == "yes" || answer == "Y")
			{
				cout << "Enter room price: ";
				cin >> r[i].price;
			}
			else
			{
				process_fail = true;
				cout << "Enter price again\n";
			}

		} while (process_fail);


		keepEditing = checking();
		if (keepEditing == true)
			continue;
		else if (keepEditing == false)
			break;

	}
	return roomsTaken;
}