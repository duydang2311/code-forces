#include <iostream>

int main() {
	int n, score, worst, best, cnt = 0;
	std::cin >> n;
	worst = -1;
	best = -1;
	for(int i = 0; i != n; i++) {
		std::cin >> score;
		if(worst == -1) {
			worst = score;
			best = score;
		} else if(score < worst) {
			worst = score;
			cnt++;
		} else if(score > best) {
			best = score;
			cnt++;
		}
	}
	std::cout << cnt;
	return 0;
}
