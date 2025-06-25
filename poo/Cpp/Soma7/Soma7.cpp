#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string linha;

    // Lê a entrada linha por linha até o final do arquivo (EOF)
    while (std::getline(std::cin, linha)) {
        std::stringstream ss(linha);
        int numero;
        long long soma = 0;

        // Extrai números da linha até encontrar um 0 ou a linha acabar
        while (ss >> numero && numero != 0) {
            soma += numero;
        }

        std::cout << soma << std::endl;
    }

    return 0;
}