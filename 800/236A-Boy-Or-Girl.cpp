#include <iostream>

int main() {
	int count = 0;
	bool distinct[26] = {false};
	char c;
	while((c = std::cin.get())) {
		if(c != '\n')
			distinct[c - 97] = true;
		else break;
	}
	for(int i = 0; i != 26; i++) {
		if(distinct[i]) {
			count++;
		}
	}
	if(count & 1) {
		std::cout << "IGNORE HIM!";
	} else {
		std::cout << "CHAT WITH HER!";
	}
	return 0;
}