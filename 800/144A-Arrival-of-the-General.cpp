#include <iostream>

int main() {
	int n;
	int max = 1, min = 101, max_idx = 0, min_idx = 0, h;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> h;
		if(h > max) {
			max = h;
			max_idx = i;
		}
		if(h <= min) {
			min = h;
			min_idx = i;
		}
	}
	if(max_idx > min_idx) {
		max_idx --;
	}
	std::cout << (max_idx) + (n - min_idx - 1);
	return 0;
}