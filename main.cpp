#include <iostream>
#include <Poco/URI.h>
#include <nlohmann/json.hpp>

using namespace std;

int main() {
	std::string uri_string;
	std::cin >> uri_string;
	nlohmann::json result;
	result["uri"] = uri_string;
	std::cout << result << std::endl;
	return 0;
}
