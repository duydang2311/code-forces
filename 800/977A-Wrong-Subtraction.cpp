#include <iostream>

int main() {
	long long n = 0;
	int k = 0,
		digit = 0;

	std::cin >> n >> k;
	for(int i = 0; i != k; i++) {
		digit = n % 10;
		if(digit != 0) {
			n--;
		} else {
			n /= 10;
		}
	}
	std::cout << n;
	return 0;
}