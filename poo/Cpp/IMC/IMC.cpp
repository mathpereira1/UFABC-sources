#include <iostream>
#include <string>

int main() {
    double altura, peso;
    std::cin >> altura >> peso;
    
    double imc = peso / (altura * altura);

    if (imc < 16) {
        std::cout << "Magreza grave" << std::endl;
    } else if (imc < 17) {
        std::cout << "Magreza moderada" << std::endl;
    } else if (imc < 18.5) {
        std::cout << "Magreza leve" << std::endl;
    } else if (imc < 25) {
        std::cout << "Saudavel" << std::endl;
    } else if (imc < 30) {
        std::cout << "Sobrepeso" << std::endl;
    } else if (imc < 35) {
        std::cout << "Obesidade Grau I" << std::endl;
    } else if (imc < 40) {
        std::cout << "Obesidade Grau II (severa)" << std::endl;
    } else {
        std::cout << "Obesidade Grau III (morbida)" << std::endl;
    }

    return 0;
}