#include <iostream>

int main() {
	unsigned long long n;
	std::cin >> n;
	if(n % 2 == 0) {
		std::cout << n / 2;
	} else {
		std::cout << "-" << ((unsigned long long)(n / 2) + 1);
	}
	return 0;
}