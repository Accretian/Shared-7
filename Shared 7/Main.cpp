#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> vectorrecursion(std::vector<std::string> vector, int numberofch) {
	int numberofactions = 0;
	std::vector<std::string> v2;
	std::copy(vector.begin(), vector.end(), v2);

	for (int i = 0; i != (int)v2.size(); i++) {
		while (true) {
			for (std::string s : v2) {
				if (numberofch < (int)s.size()) {
					if ()
				}
			}
		}
	}






	for (std::string str : v2) {
		if (numberofch < (int)str.size()) {
			for (int i = 0; i != (int)v2.size(); i++) {
				if (v2[i])
			}

		}
	}
	


	


}



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