#include <iostream>

int main() {
    int n;
    while (std::cin >> n && n >= 0) {
        unsigned long long fatorial = 1;
        for (int i = 2; i <= n; ++i) {
            fatorial *= i;
        }
        std::cout << fatorial << std::endl;
    }
    return 0;
}