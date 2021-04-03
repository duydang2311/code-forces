#include <iostream>

int main() {
	std::string s;
	std::cin >> s;

	int lower = 0;
	int upper = 0;
	for(std::string::const_iterator it = s.cbegin(); it != s.cend(); it++) {
		if(*it < 'a') {
			upper++;
		} else {
			lower++;
		}
	}

	if(lower >= upper) {
		for(std::string::iterator it = s.begin(); it != s.end(); it++) {
			if(*it < 'a') {
				*it += 32;
			}
		}
	} else {
		for(std::string::iterator it = s.begin(); it != s.end(); it++) {
			if(*it >= 'a') {
				*it -= 32;
			}
		}
	}
	std::cout << s;
	return 0;
}