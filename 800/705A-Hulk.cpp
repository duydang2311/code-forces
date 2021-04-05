#include <iostream>

int main() {
	int n;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		if(i == 0) {
			std::cout << "I hate ";
		} else {
			std::cout << "that I hate ";
		}
		i++;
		if(i != n) {
			std::cout << "that I love ";
		} else {
			break;
		}
	}
	std::cout << "it";
	return 0;
}