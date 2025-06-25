#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    bool primeiro_impresso = false;

    // Percorre todos os números no intervalo [A, B]
    for (int i = a; i <= b; ++i) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            // Adiciona um espaço antes do número, exceto para o primeiro
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