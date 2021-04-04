#include <iostream>

int main() {
	int year;
	int temp;
	bool digit[10];
	bool exist = false;
	std::cin >> year;
	for(int i = year + 1; ; i++) {
		exist = false;
		for(int j = 0; j != 10; j++) {
			digit[j] = false;
		}
		temp = i;
		while(temp != 0) {
			if(digit[temp % 10]) {
				exist = true;
				break;
			}
			digit[temp % 10] = true;
			temp /= 10;
		}
		if(!exist) {
			std::cout << i;
			return 0;
		}
	}
	return 0;
}