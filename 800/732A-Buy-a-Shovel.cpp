#include <iostream>

int main() {
    int k, r;
    std::cin >> k >> r;
    for(int i = 1; ; ++i) {
        if((k * i) % 10 == 0 || (k * i - r) % 10 == 0) {
            std::cout << i;
            break;
        }
    }
    return 0;
}
