#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    while (std::cin >> n && n != 0) {
        int valor;
        for (int i = 0; i < n; ++i) {
            std::cin >> valor;
            std::cout << (valor % 2);
            if (i < n - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}