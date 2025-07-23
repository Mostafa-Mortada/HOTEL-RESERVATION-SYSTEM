#ifndef ROOM_H
#define ROOM_H

using namespace std;

struct Status {
	bool available;
	bool availability[7][3];
};

struct Info {
	string Description;
	int roomType;
	int floor;
	int price;
	int roomNumber;
};

struct Room {
	string id;
	Status status;
	Info info;
};

struct Period {
	int from;
	int to;
};

struct BookingStatus
{
	bool active;
	string cancel_at;
};

struct Booking {
	string id;
	int room_id;
	int user_id;
	BookingStatus status;
	Period period;
};

extern Booking* bookings; // Pointer to array of bookings
extern Room* rooms;
extern int numBookings; // Pointer to array of bookings
extern int numRooms;

#endif // ROOM_H
