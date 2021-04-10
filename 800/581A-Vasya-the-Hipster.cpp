#include <iostream>

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int a, b;
	std::cin >> a >> b;

	std::cout << min(a, b) << " " << int((a + b) - 2 * min(a, b)) / 2;
	return 0;
}