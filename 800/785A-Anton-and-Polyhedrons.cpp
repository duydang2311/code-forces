#include <iostream>

int main() {
	int n;
	int total = 0;
	std::string s;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> s;
		switch(s[0]) {
			case 'T': {
				total += 4;
				break;
			}
			case 'C': {
				total += 6;
				break;
			}
			case 'O': {
				total += 8;
				break;
			}
			case 'D': {
				total += 12;
				break;
			}
			case 'I': {
				total += 20;
				break;
			}
		}
	}
	std::cout << total;
	return 0;
}