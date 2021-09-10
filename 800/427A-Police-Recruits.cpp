#include <iostream>

int main() {
    int n;
    int k;
    std::cin >> n;
    int officers = 0;
    int untreated = 0;
    for(int i = 0; i != n; i++) {
        std::cin >> k;
        if(k == -1) {
            if(officers > 0) {
                --officers;
            } else {
                ++untreated;
            }
        } else officers += k;
    }
    std::cout << untreated;
    return 0;
}
