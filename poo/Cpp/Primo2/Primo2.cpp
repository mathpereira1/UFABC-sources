#include <iostream>
#include <vector>
#include <cmath>

// Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int s, f;
    std::cin >> s >> f;

    std::vector<int> primos;
    // Encontra todos os primos no intervalo [S, F]
    for (int i = s; i <= f; ++i) {
        if (ehPrimo(i)) {
            primos.push_back(i);
        }
    }

    std::cout << "Primos entre " << s << " e " << f << ":";

    // Imprime a lista de primos encontrados
    for (size_t i = 0; i < primos.size(); ++i) {
        std::cout << " " << primos[i];
    }
    std::cout << std::endl;

    return 0;
}