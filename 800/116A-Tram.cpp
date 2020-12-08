#include <iostream>
#include <vector>

int main() {
	int n = 0;
	std::vector<int> a, b;
	std::cin >> n;
	for(int i = 0, temp_a = 0, temp_b = 0; i != n; i++) {
		std::cin >> temp_a >> temp_b;
		a.push_back(temp_a);
		b.push_back(temp_b);
	}

	int capacity = 0,
		max = 0;
	for(decltype(a.cbegin()) it_a = a.cbegin(), it_b = b.cbegin(); it_a != a.cend(); it_a++, it_b++) {
		capacity += *it_b - *it_a;
		max = (capacity > max) ? capacity : max;
	}
	std::cout << max;
	return 0;
}