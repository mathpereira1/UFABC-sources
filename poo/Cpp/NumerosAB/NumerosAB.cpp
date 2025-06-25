#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    // Loop de A até B, imprimindo cada número
    for (int i = a; i <= b; ++i) {
        std::cout << i;
        // Adiciona um espaço, exceto após o último número
        if (i < b) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}