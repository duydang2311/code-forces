#include <iostream>

int main() {
	int n;
	int t;
	std::string s;
	bool queue[50];
	std::cin >> n >> t >> s;

	for(std::string::const_iterator it = s.cbegin(); it != s.cend(); it++) {
		queue[it - s.cbegin()] = (*it == 'B') ? true : false;
	}
	for(int k = 0; k != t; k++) {
		for(int i = 0, j = n - 1; i < j; i++) {
			if(queue[i] && !queue[i + 1]) {
				queue[i] = false;
				queue[i + 1] = true;
				i++;
			}
		}
	}

	for(int i = 0; i != n; i++) {
		std::cout << ((queue[i]) ? 'B' : 'G');
	}
	return 0;
}