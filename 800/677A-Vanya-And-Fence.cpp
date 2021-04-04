#include <iostream>

int main() {
	int n;
	int h;
	int fh;
	int row = 0;
	std::cin >> n >> h;
	for(int i = 0; i != n; i++) {
		std::cin >> fh;
		row += (fh > h) ? 2 : 1;
	}
	std::cout << row;
	return 0;
}