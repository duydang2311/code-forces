#include <iostream>

int main() {
	int n;
	char c;
	bool appear['z' - 'a' + 1];
	int sum = 0;
	std::cin >> n;

	for(int i = 0; i != ('z' - 'a' + 1); i++) {
		appear[i] = false;
	}
	for(int i = 'a'; i <= 'z'; i++) {
		sum += i;
	}
	for(int i = 0, idx; i != n; i++) {
		std::cin >> c;
		idx = (c < 'a') ? c + 32 - 'a' : c - 'a';
		if(appear[idx]) {
			continue;
		}
		appear[idx] = true;
		if(c < 'a') {
			sum -= c + 32;
		} else {
			sum -= c;
		}
	}

	if(!sum) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}