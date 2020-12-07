#include <iostream>

int main() {
	std::string string1;
	std::string string2;
	std::cin >> string1 >> string2;
	for(std::size_t i = 0, j = string1.length(); i != j; i++) {
		if(std::tolower(string1[i]) < std::tolower(string2[i])) {
			std::cout << -1;
			return 0;
		} else if(std::tolower(string1[i]) > std::tolower(string2[i])) {
			std::cout << 1;
			return 0;
		}
	}
	std::cout << 0;
	return 0;
}