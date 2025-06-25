#include <iostream>

int main() {
    int n;
    // Loop continua enquanto a entrada for um número não negativo
    while (std::cin >> n && n >= 0) {
        int soma_divisores = 0;
        // Encontra a soma dos divisores próprios
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                soma_divisores += i;
            }
        }

        // Classifica o número e imprime o resultado
        if (soma_divisores > n) {
            std::cout << "abundante" << std::endl;
        } else if (soma_divisores < n) {
            std::cout << "deficiente" << std::endl;
        } else {
            std::cout << "perfeito" << std::endl;
        }
    }
    return 0;
}