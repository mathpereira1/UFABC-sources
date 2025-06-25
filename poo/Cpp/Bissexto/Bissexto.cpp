#include <iostream>

int main() {
    int ano;
    std::cin >> ano;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        std::cout << "ANO BISSEXTO" << std::endl;
    } else {
        std::cout << "ANO NAO BISSEXTO" << std::endl;
    }
    return 0;
}