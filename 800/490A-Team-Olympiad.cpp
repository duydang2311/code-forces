#include <iostream>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    std::cin >> n;
    int t[n];
    int formed[n]; 
    int skill[3] = {0, 0, 0};
    for(int i = 0; i != n; i++) {
        std::cin >> t[i];
        formed[i] = skill[t[i] - 1];
        ++skill[t[i] - 1];
    }
    int m = min(skill[0], min(skill[1], skill[2]));
    std::cout << m << std::endl;
    for(int i = 0; i != m; i++) {
        for(int j = 0; j != n; j++) {
            if(formed[j] == i) {
                std::cout << j + 1 << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
