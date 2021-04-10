#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int cnt = 0;
	int denominations[] = {1, 5, 10, 20, 100};
	int i = sizeof(denominations) / sizeof(int) - 1;
	while(n != 0) {
		if(n >= denominations[i]) {
			n -= denominations[i];
			cnt++;
		} else i--;
	}
	std::cout << cnt;
	return 0;
}