#include <iostream>

int main() {
	bool damaged[100000];
	int v[4], d, count = 0;
	std::cin >> v[0] >> v[1] >> v[2] >> v[3] >> d;
	for(int i = 0; i != d; i++) {
		damaged[i] = false;
	}

	for(int i = 0; i != 4; i++) {
		for(int j = v[i]; j <= d; j += v[i]) {
			damaged[j - 1] = true;
		}
	}

	for(int i = 0; i != d; i++) {
		if(damaged[i]) {
			count++;
		}
	}
	std::cout << count;
	return 0;
}