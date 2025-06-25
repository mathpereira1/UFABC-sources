#include <iostream>
#include <iomanip>

int main() {
    double soma = 0.0;
    double nota;

    // Loop para ler as 10 notas
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Informe a " << i << "a. nota: ";
        std::cin >> nota;
        soma += nota;
    }

    double media = soma / 10.0;

    std::cout << "Sua Media Final dos Trabalhos (NFT) foi " 
              << std::fixed << std::setprecision(2) << media << std::endl;

    return 0;
}