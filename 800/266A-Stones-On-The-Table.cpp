#include <iostream>

int main() {
	int n = 0,
		count = 0;
	char last, now;
	std::cin >> n;

	std::cin >> now;
	last = now;
	for(int i = 1; i != n; i++) {
		std::cin >> now;
		if(last == now) {
			count++;
		}
		last = now;
	}
	std::cout << count;
	return 0;
}