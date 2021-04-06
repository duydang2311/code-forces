#include <iostream>

int main() {
	int n;
	int level;
	int amount;
	bool passed[100];
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		passed[i] = false;
	}
	for(int k = 0; k != 2; k++) {
		std::cin >> amount;
		for(int i = 0; i != amount; i++) {
			std::cin >> level;
			passed[level - 1] = true;
		}
	}
	for(int i = 0; i != n; i++) {
		if(!passed[i]) {
			std::cout << "Oh, my keyboard!";
			return 0;
		}
	}
	std::cout << "I become the guy.";
	return 0;
}