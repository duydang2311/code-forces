#include <iostream>

int main() {
    int n;
    int max = 0;
    int spend = 0;
    std::cin >> n;
    int a[n];
    for(int i = 0; i != n; i++) {
        std::cin >> a[i];
        if(a[i] > max) {
            max = a[i];
        }
    }
    for(int i = 0; i != n; i++) {
        spend += max - a[i];
    }
    std::cout << spend;
    return 0;
}
