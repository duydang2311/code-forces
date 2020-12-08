#include <iostream>

int main() {
	int x = 0,
		steps = 0;
	std::cin >> x;
	for(int i = 5; i != 0; i--) {
		while(int(x / i)) {
			x -= i;
			steps++;
		}
	}
	std::cout << steps;
	return 0;
}