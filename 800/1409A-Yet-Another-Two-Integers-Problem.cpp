#include <iostream>

int abs(int n) {
	return (n < 0) ? -n : n;
}

int main() {
	int t, a, b;
	std::cin >> t;
	for(int i = 0; i != t; i++) {
		std::cin >> a >> b;
		if(a == b) {
			std::cout << 0 << std::endl;
		} else {
			std::cout << ((abs(a - b) % 10 == 0) ? abs(a - b) / 10 : abs(a - b) / 10 + 1) << std::endl;
		}
	}
	return 0;
}
