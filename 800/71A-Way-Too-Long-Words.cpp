#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;
	std::string word;
	for(int i = 0, length = 0; i != n; i++) {
		std::cin >> word;
		if((length = word.length()) > 10) {
			word = word[0] + std::to_string(length - 2) + word[length - 1];
		}
		if(i == n - 1) {
			std::cout << word;
		} else {
			std::cout << word << std::endl;
		}
	}
	return 0;
}