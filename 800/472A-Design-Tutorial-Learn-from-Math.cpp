#include <iostream>
#include <cmath>

bool isprime(int n, int incre = 2) {
	if(n < 4) {
		return (n > 1);
	}
	if(incre == int(std::pow(n, 0.5))) {
		return !((n % incre) == 0);
	}
	if(n % incre == 0) {
		return false;
	}
	return isprime(n, ++incre);
}

int main() {
	int n, mid;
	std::cin >> n;
	for(int i = int(n / 2); i > 3; i --) {
		if(!isprime(i) && !isprime(n - i)) {
			std::cout << i << " " << n - i;
			return 0;
		}
	}
	return 0;
}
