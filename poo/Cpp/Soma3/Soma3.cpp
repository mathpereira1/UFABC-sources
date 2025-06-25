#include <iostream>

int main() {
    long long soma = 0;
    int valor;

    // Loop que lê números até o final da entrada (EOF)
    while (std::cin >> valor) {
        soma += valor;
    }

    std::cout << soma << std::endl;

    return 0;
}