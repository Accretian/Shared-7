#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>


static std::vector<std::string> vectorsort(std::vector<std::string> vector) {


	for (int i = 0; i != (int)vector.size(); i++) {
		for (int j = 0; j != (int)vector.size(); j++) {
			if (std::strcmp(vector[j].c_str(), vector[i].c_str()) < 0) {
				std::swap(vector[j], vector[i]);
			}
		}
	}

	return vector;

}



int main() {

	std::string str;
	std::vector<std::string> vstring;

	while (true) {
		std::getline(std::cin, str);
		if (str != "")
			vstring.push_back(str);
		else break;
	}

	vstring = vectorsort(vstring);

	for (std::string s : vstring)
		std::cout << s << '\n';


	std::cin >> str;


}