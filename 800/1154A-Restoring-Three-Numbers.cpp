#include <iostream>

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int x[4], xmax;
	std::cin >> x[0] >> x[1] >> x[2] >> x[3];
	xmax = max(max(x[0], max(x[1], x[2])), x[3]);
	for(int i = 0; i != 4; i++) {
		if(xmax == x[i]) {
			continue;
		}
		std::cout << xmax - x[i] << " ";
	}
	return 0;
}
