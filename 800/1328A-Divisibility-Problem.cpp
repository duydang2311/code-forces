#include <iostream>

int main() {
	int n;
	int a;
	int b;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> a >> b;
		if(a % b == 0) {
			std::cout << 0 << std::endl;
			continue;
		}
		std::cout << b * (int(a / b) + 1) - a << std::endl;
	}
	return 0;
}