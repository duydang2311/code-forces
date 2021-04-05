#include <iostream>

int main() {
	int n;
	bool flag;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> flag;
		if(flag) {
			std::cout << "hard";
			return 0;
		}
	}
	std::cout << "easy";
	return 0;
}