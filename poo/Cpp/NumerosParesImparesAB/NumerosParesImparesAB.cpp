#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    bool primeiro_impresso = false;

    // Imprime os números pares
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            if (primeiro_impresso) {
                std::cout << " ";
            }
            std::cout << i;
            primeiro_impresso = true;
        }
    }
    std::cout << std::endl;

    primeiro_impresso = false;

    // Imprime os números ímpares
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            if (primeiro_impresso) {
                std::cout << " ";
            }
            std::cout << i;
            primeiro_impresso = true;
        }
    }
    std::cout << std::endl;

    return 0;
}