#include <iostream>
#include <vector>
#include <string>

int main() {

	std::string str;
	std::vector<std::string> vin;
	std::vector<std::string> vout;

	while (true) {
		std::getline(std::cin, str);
		if (str != "")
			vin.push_back(str);
		else break;
	}



}