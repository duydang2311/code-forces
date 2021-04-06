#include <iostream>

int main() {
	int count = 0;
	int arr[4];
	for(int i = 0; i != 4; i++) {
		std::cin >> arr[i];
	}
	for(int i = 0; i != 3; i++) {
		for(int j = i + 1; j != 4; j++) {
			if(arr[i] == arr[j]) {
				count ++;
				break;
			}
		}
	}
	std::cout << count;
	return 0;
}