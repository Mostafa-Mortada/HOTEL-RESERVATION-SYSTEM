#pragma once
#include "Room.h"

class Main {
public:
	static bool cleanUp();
	static void cleanUsers();
	static void cleanRooms();
	static void cleanBookings();
	static std::string getCurrentTime();
	static bool checkAvailability(int roomId, int from, int to, const string& exludedBookingId = "0");
	static std::pair<Booking*, int> getBookings(int id, bool by);
	static Booking& findBooking(const std::string& bookingId);
	static Room& findRoom(const std::string& roomId);
	static bool saveChanges();
	static string convertRoomType(int roomType);
	static int getNumericUpDownValue(System::Windows::Forms::NumericUpDown^ numericUpDownControl);
	static int convertDayTimeToInt(int index);
	static int convertIntToDayTime(int value);
	static bool logout();
	static std::pair<Room*, int> searchRooms(int type, int from, int to);
	static std::pair<Booking*, int> searchBookings(int roomNumber, int from, int to);
	static bool deleteRoom(const string& roomId);
	static bool deleteBooking(const string& bookingId);
	static bool addRoom(int number, int type, int floor, int price, const string& description = "");
	static bool cancelBooking(const string& bookingId);
	static int calcBookingPeriods(const string& bookingId);
	static bool reserveBooking(const string& roomId, const int from, const int to);
	static string generateUniqueUserID();
	static bool modifyBooking(const string& roomId, const int from, const int to, string& bookingId);
};
