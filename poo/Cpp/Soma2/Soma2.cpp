#include <iostream>

int main() {
    // N é a quantidade de números a serem lidos
    int n;
    std::cin >> n;

    long long soma = 0;
    int valor;

    // Loop para ler N números e somá-los
    for (int i = 0; i < n; ++i) {
        std::cin >> valor;
        soma += valor;
    }

    std::cout << soma << std::endl;

    return 0;
}