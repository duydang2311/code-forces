#include <iostream>

int main() {
	int a = 0,
		b = 0,
		years = 0;
	std::cin >> a >> b;
	while(a <= b && ++years) {
		a *= 3;
		b *= 2;
	}
	std::cout << years;
	return 0;
}