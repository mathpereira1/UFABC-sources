#include <iostream>
#include <cmath>

// Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    // Loop continua enquanto a entrada for um número não negativo
    while (std::cin >> n && n >= 0) {
        if (ehPrimo(n)) {
            std::cout << "SIM" << std::endl;
        } else {
            std::cout << "NAO" << std::endl;
        }
    }
    return 0;
}