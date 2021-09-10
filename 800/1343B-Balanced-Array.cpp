#include <iostream>

int main() {
    int k;
    int n;
    int sum;
    int cnt;
    std::cin >> k;
    for(int i = 0; i != k; i++) {
        std::cin >> n;
        if((n / 2) % 2 != 0) {
            std::cout << "NO"; 
        } else {
            std::cout << "YES" << std::endl;
            sum = 0;
            cnt = n / 2;
            for(int j = (n - ((n / 2) - 1) * 2); cnt; j += 2) {
                sum += j;
                std::cout << j << " ";
                --cnt;
            }

            cnt = n / 2;
            for(int j = 1; cnt > 1; j += 2) {
                std::cout << j << " ";
                sum -= j;
                --cnt;
            }
            std::cout << sum;
        }
        if(i < k - 1) {
            std::cout << std::endl;
        }
    }
    return 0;
}
