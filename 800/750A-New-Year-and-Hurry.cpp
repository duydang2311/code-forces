#include <iostream>

int main() {
	int n, k;
	std::cin >> n >> k;

	int timeout = 4 * 60 - k;
	int cnt = 0;
	for(int i = 0; i != n; i++) {
		timeout -= 5 * (i + 1);
		if(timeout >= 0) {
			cnt++;
		} else {
			break;
		}
	}
	std::cout << cnt;
	return 0;
}