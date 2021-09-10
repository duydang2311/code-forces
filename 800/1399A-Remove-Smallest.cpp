#include <iostream>

int abs(int value) {
	return (value < 0) ?  -value : value;
}

int main() {
	int t, n, a[101];
	std::cin >> t;
	for(int k = 0; k != t; k++) {
		std::cin >> n;
		for(int i = 0; i != n; i++) {
			a[i] = 0;
			std::cin >> a[i];
		}

		for(int i = 0; i != (n - 1); i++) {
			for(int j = i + 1; j != n; j++) {
				if(a[j] < a[i]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}

		for(int i = 0; i != (n - 1);) {
			if(abs(a[i + 1] - a[i]) <= 1) {
				int pos;
				if(a[i + 1] > a[i]) {
					pos = i;
				} else {
					pos = i + 1;
				}
				for(int l = pos; l != (n - 1); l++) {
					a[l] = a[l + 1];
				}
				n--;
			} else {
				i++;
			}
		}
		if(n == 1) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}
