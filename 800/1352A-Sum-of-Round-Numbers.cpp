#include <iostream>
#include <cmath>

int main() {
	int t;
	int n, temp_n;
	int cnt;
	short digit, digitcnt;
	std::cin >> t;
	for(int i = 0; i != t; i++) {
		cnt = 0;
		digitcnt++;
		std::cin >> n;
		temp_n = n;
		while(temp_n != 0) {
			digit = temp_n % 10;
			if(digit != 0) {
				cnt++;
			}
			temp_n /= 10;
		}
		std::cout << cnt << std::endl;
		cnt = 0;
		while(n != 0) {
			digit = n % 10;
			if(digit != 0) {
				std::cout << digit * int(std::pow(10, cnt)) << " ";
			}
			n /= 10;
			cnt++;
		}
		std::cout << std::endl;
	}
	return 0;
}