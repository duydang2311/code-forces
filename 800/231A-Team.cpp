#include <iostream>

int main() {
	int n = 0,
		problems = 0;

	std::cin >> n;
	for(int i = 0; i != n; i++) {
		for(int j = 0, count = 0, sure = 0; j != 3; j++) {
			std::cin >> sure;
			if(sure && ++count == 2) {
				problems++;
				count = 0;
			}
		}
	}
	std::cout << problems;
	return 0;
}