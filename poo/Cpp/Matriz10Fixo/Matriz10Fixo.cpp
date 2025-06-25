#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int valor;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> valor;
            std::cout << valor * 10;
            if (j < 4) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}