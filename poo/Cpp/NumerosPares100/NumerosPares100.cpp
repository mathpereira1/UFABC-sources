#include <iostream>

int main() {
    // Loop de 2 a 100, incrementando de 2 em 2
    for (int i = 2; i <= 100; i += 2) {
        std::cout << i;
        // Adiciona um espaço, exceto após o 100
        if (i < 100) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}