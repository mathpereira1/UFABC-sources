#include <iostream>

int main() {
    long long soma = 0;
    int valor;

    // Loop que lê números até que o valor 0 seja encontrado
    // O valor 0 não deve ser somado
    while (std::cin >> valor && valor != 0) {
        soma += valor;
    }

    std::cout << soma << std::endl;

    return 0;
}