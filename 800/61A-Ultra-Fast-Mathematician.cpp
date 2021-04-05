#include <iostream>

int main() {
	std::string line1;
	std::string line2;
	std::cin >> line1 >> line2;
	for(std::size_t i = 0, j = line1.size(); i != j; i++) {
		if(line1[i] != line2[i]) {
			std::cout << 1;
		} else {
			std::cout << 0;
		}
	}
	return 0;
}