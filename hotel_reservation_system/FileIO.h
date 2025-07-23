#pragma once

#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class FileIO {
public:
	static bool readFromJsonFile(const std::string& filePath, json& jsonData);
	static bool writeToJsonFile(const std::string& filePath, const json& jsonData);
	static bool deleteFile(const std::string& filePath);
	static bool loadUsersData(const json& jsonData);
	static bool loadRoomsData(const json& jsonData);
	static int loadBookingsData(const json& bookingsData);
	static int loadSession(const json& sessionData);
	static bool loadDatabase();
};
