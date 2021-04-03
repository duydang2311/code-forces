#include <iostream>

int main() {
	int n;
	int a = 0;
	int d = 0;
	char c;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> c;
		if(c == 'A') {
			a++;
		} else {
			d++;
		}
	}

	std::cout << ((a > d) ? "Anton" : (a < d) ? "Danik" : "Friendship");
	return 0;
}