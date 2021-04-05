#include <iostream>

int main() {
	int n;
	double p;
	double total = 0.00;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> p;
		total += p;
	}
	std::cout << total / double(n);
	return 0;
}