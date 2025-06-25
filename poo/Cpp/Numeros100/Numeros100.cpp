#include <iostream>

int main() {
    // Loop de 0 a 100, imprimindo cada número
    for (int i = 0; i <= 100; ++i) {
        std::cout << i;
        // Adiciona um espaço, exceto após o último número
        if (i < 100) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}