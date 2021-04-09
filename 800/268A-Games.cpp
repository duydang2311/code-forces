#include <iostream>
#include <list>

int main() {
	int n;
	int h, a;
	int cnt = 0;
	std::list<std::pair<int, int>> team;
	std::cin >> n;
	for(int i = 0; i != n; i++) {
		std::cin >> h >> a;
		team.push_back({h, a});
	}

	for(std::list<std::pair<int, int>>::const_iterator it = team.cbegin(); it != team.cend(); it++) {
		for(std::list<std::pair<int, int>>::const_iterator jt = team.cbegin(); jt != team.cend(); jt++) {
			if(it == jt) {
				continue;
			}
			if(it->first == jt->second) {
				cnt++;
			}
		}
	}
	std::cout << cnt;
	return 0;
}