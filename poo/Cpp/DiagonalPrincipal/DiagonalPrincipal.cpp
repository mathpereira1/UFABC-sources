#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    char operacao;
    int n;
    std::cin >> operacao >> n;
    double soma = 0.0;
    int valor;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> valor;
            if (i == j) {
                soma += valor;
            }
        }
    }
    std::cout << std::fixed << std::setprecision(1);
    if (operacao == 'S') {
        std::cout << soma << std::endl;
    } else if (operacao == 'M') {
        if (n > 0) {
            std::cout << soma / n << std::endl;
        } else {
            std::cout << 0.0 << std::endl;
        }
    }
    return 0;
}