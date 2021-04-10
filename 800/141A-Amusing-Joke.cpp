#include <iostream>

int main() {
	std::string line1, line2, line3;
	std::cin >> line1 >> line2 >> line3;
	if(line3.size() != (line1.size() + line2.size())) {
		std::cout << "NO";
		return 0;
	}

	for(std::string::const_iterator it3 = line3.cbegin(); it3 != line3.cend();) {
		bool deleted = false;
		for(std::string::const_iterator it1 = line1.cbegin(); it1 != line1.cend(); it1++) {
			if(*it1 == *it3) {
				line1.erase(it1);
				it3 = line3.erase(it3);
				deleted = true;
				break;
			}
		}
		if(!deleted) {
			it3++;
		}
	}

	for(std::string::const_iterator it3 = line3.cbegin(); it3 != line3.cend();) {
		bool deleted = false;
		for(std::string::const_iterator it2 = line2.cbegin(); it2 != line2.cend(); it2++) {
			if(*it2 == *it3) {
				line2.erase(it2);
				it3 = line3.erase(it3);
				deleted = true;
				break;
			}
		}
		if(!deleted) {
			it3++;
		}
	}

	if(line1.size() || line2.size()) {
		std::cout << "NO";
	} else {
		std::cout << "YES";
	}
	return 0;
}