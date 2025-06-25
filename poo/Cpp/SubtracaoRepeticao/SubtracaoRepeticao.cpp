#include <iostream>

int main() {
    // Lê os dois valores inteiros de entrada
    int a, b;
    std::cin >> a >> b;

    int resultado = a;

    // Subtrai 1 de 'resultado', B vezes.
    for (int i = 0; i < b; ++i) {
        resultado--;
    }

    // Imprime o resultado final
    std::cout << resultado << std::endl;

    return 0;
}