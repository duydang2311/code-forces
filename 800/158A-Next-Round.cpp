#include <iostream>

int main() {
	int n = 0,
		k = 0,
		count = 0,
		score = 0,
		k_score = 0;
	std::cin >> n >> k;
	while(count != n && std::cin >> score) {
		if(!score) {
			break;
		}
		if(count <= k - 1) {
			k_score = score;
		} else if(score != k_score) {
			break;
		}
		count++;
	}
	std::cout << count;
	return 0;
}