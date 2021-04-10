#include <iostream>

int main() {
	int n, m;
	bool lr = true;
	std::cin >> n >> m;

	for(int i = 0; i != n; i++) {
		if(i % 2 == 0) {
			for(int j = 0; j != m; j++) {
				std::cout << "#";
			}
		} else {
			if(lr) {
				for(int j = 0; j != (m - 1); j++) {
					std::cout << ".";
				}
				std::cout << "#";
				lr = false;
			} else {
				std::cout << "#";
				for(int j = 0; j != (m - 1); j++) {
					std::cout << ".";
				}
				lr = true;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}