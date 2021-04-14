#include <iostream>
#include <list>

int abs(int value) {
	return (value < 0) ?  -value : value;
}

int main() {
	int t;
	int n;
	int e;
	std::list<int> a;
	std::cin >> t;
	for(int i = 0; i != t; i++) {
		std::cin >> n;
		a.clear();
		for(int j = 0; j != n; j++) {
			std::cin >> e;
			a.push_back(e);
		}

		for(std::list<int>::iterator it = a.begin(); it != std::prev(a.end()); ) {
			bool removed = false;
			for(std::list<int>::iterator jt = std::next(it); jt != a.end(); jt++) {
				if(abs(*it - *jt) <= 1) {
					if(*it > *jt) {
						if(std::next(it) == jt) {
							it = a.erase(jt);
							removed = true;
						} else {
							a.erase(jt);
						}
					} else {
						it = a.erase(it);
						removed = true;
					}
					break;
				}
			}
			if(!removed) {
				it++;
			}
		}
		if(a.size() == 1) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}