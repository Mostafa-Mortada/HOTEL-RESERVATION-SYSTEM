#ifndef USERDATA_H
#define USERDATA_H

#include <vector>

// Define the User struct
struct User {
	std::string id;
	std::string username;
	std::string password;
	std::string name;
	std::string email;
	std::string phone;
	int age;
	int user_type;
};

// Declare the global vector variable
extern std::vector<User> users;
extern User active_user;
extern std::string last_login;

#endif // USERDATA_H
