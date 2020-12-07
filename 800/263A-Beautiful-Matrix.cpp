#include <iostream>

int abs(int n) {
	return (n >= 0) ? n : -n;
}

int main() {
	const int size = 5;
	int matrix[size][size];
	for(int i = 0; i != size; i++) {
		for(int j = 0; j != size; j++) {
			std::cin >> matrix[i][j];
			if(matrix[i][j]) {
				std::cout << abs(j - 2) + abs(i - 2);
				return 0;
			}
		}
	}

	return 0;
}