#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int soma = a;

    // Adiciona 1 à soma, B vezes
    for (int i = 0; i < b; ++i) {
        soma++;
    }

    std::cout << soma << std::endl;

    return 0;
}