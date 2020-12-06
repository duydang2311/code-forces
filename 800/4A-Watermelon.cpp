#include <iostream>
#include <cmath>

int main() {
	int w = 0;
	std::cin >> w;
	for(int i = 2, j = int(sqrt(w)); i <= j; i += 2) {
		if(!((w - i) & 1)) {
			std::cout << "YES";
			return 0;
		}
	}
	std::cout << "NO";
	return 0;
}