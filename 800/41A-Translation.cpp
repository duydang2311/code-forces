#include <iostream>

int main() {
	std::string s;
	std::string t;
	std::cin >> s >> t;
	for(int i = t.size() - 1, j = 0; i != -1; i--) {
		if(t[i] != s[j++]) {
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";
	return 0;
}