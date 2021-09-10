#include <iostream>

int main() {
    int n, k;
    int passed = 0;
    int y;
    std::cin >> n >> k;
    for(int i = 0; i != n; ++i) {
        std::cin >> y;
        if((y + k) <= 5) {
            ++passed;
        }
    }
    std::cout << int(passed / 3);
    return 0;
}
