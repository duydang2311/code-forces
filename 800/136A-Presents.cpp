#include <iostream>

int main() {
	int n;
	int p;
	int receiveFrom[100];
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> p;
		receiveFrom[p - 1] = i + 1;
	}

	for(int i = 0; i != n; i++) {
		if(i == n - 1) {
			std::cout << (receiveFrom[i]);
		} else {
			std::cout << (receiveFrom[i]) << " ";
		}
	}
	return 0;
}