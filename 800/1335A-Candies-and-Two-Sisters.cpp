#include <iostream>

int main() {
	int n;
	int t;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> t;
		if(t % 2 == 0) {
			std::cout << (t / 2) - 1 << std::endl;
		} else {
			std::cout << int(t / 2) << std::endl;
		}
	}
	return 0;
}