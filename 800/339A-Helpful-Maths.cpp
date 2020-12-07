#include <iostream>
#include <vector>

int main() {
	int numbers[3] = {0};
	std::string s;
	std::cin >> s;
	for(decltype(s.cbegin()) it = s.cbegin(); it < s.cend(); it += 2) {
		numbers[*it - 49]++;
	}
	s = "";
	for(int i = 0; i != 3; i++) {
		for(int j = 0; j != numbers[i]; j++) {
			s += std::to_string(i + 1) + "+";
		}
	}
	s.pop_back();
	std::cout << s;
	return 0;
}