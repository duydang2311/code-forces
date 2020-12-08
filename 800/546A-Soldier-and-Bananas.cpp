#include <iostream>

int main() {
	int n = 0,
		k = 0,
		w = 0,
		s = 0;

	std::cin >> k >> n >> w;
	s = w * k + (w * (w - 1) * k) / 2;
	std::cout << ((s > n) ? s - n : 0);
	return 0;
}