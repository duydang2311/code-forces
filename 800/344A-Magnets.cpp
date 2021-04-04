#include <iostream>

int main() {
	int n;
	int flag;
	int group = 0;
	int last_flag = -1;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> flag;
		if(last_flag == -1 || flag != last_flag) {
			group++;
			last_flag = flag;
		}
	}
	std::cout << group;
	return 0;
}