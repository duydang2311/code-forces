#include <iostream>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int abs(int a) {
    return (a < 0) ? -a : a;
}

int main() {
    int x1, x2, x3;
    int temp;
    std::cin >> x1 >> x2 >> x3;

    temp = x1 + x2 + x3 - max(x1, max(x2, x3)) - min(x1, min(x2, x3));

    std::cout << abs(temp - x1) + abs(temp - x2) + abs(temp - x3);
    return 0;
}
