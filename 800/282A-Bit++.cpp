#include <iostream>

int main() {
	int n = 0,
		x = 0;
	std::string line;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> line;
		x = (line[0] == '+' || line[1] == '+') ? x + 1 : x - 1;
	}
	std::cout << x;
	return 0;
}