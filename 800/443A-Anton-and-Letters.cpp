#include <iostream>
#include <string>

int main() {
	bool distinct['z' - 'a' + 1];
	for(int i = 0; i != ('z' - 'a' + 1); i++) {
		distinct[i] = false;
	}
	int count = 0;
	std::string line;
	std::getline(std::cin, line);
	for(std::string::const_iterator it = std::next(line.cbegin()), jt = std::prev(line.cend()); it != jt; it++) {
		if(*it >= 'a' && *it <= 'z') {
			if(!distinct[*it - 'a']) {
				count++;
			}
			distinct[*it - 'a'] = true;
		}
	}
	std::cout << count;
	return 0;
}