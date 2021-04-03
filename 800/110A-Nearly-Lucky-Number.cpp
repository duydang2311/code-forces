#include <iostream>

int main() {
	unsigned long long n;
	char digit;
	char count = 0;
	std::cin >> n;
	while(n != 0) {
		digit = n % 10;
		n /= 10;
		if(digit == 4 || digit == 7) {
			count++;
		}
	}

	if(!count) {
		std::cout << "NO";
		return 0;
	}
	while(count != 0) {
		digit = count % 10;
		if(digit != 4 && digit != 7) {
			std::cout << "NO";
			return 0;
		}
		count /= 10;
	}
	std::cout << "YES";
	return 0;
}