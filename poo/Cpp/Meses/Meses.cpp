#include <iostream>

int main() {
    int m;
    std::cin >> m;

    switch (m) {
        case 1: std::cout << "JANEIRO" << std::endl; break;
        case 2: std::cout << "FEVEREIRO" << std::endl; break;
        case 3: std::cout << "MARCO" << std::endl; break;
        case 4: std::cout << "ABRIL" << std::endl; break;
        case 5: std::cout << "MAIO" << std::endl; break;
        case 6: std::cout << "JUNHO" << std::endl; break;
        case 7: std::cout << "JULHO" << std::endl; break;
        case 8: std::cout << "AGOSTO" << std::endl; break;
        case 9: std::cout << "SETEMBRO" << std::endl; break;
        case 10: std::cout << "OUTUBRO" << std::endl; break;
        case 11: std::cout << "NOVEMBRO" << std::endl; break;
        case 12: std::cout << "DEZEMBRO" << std::endl; break;
        default: std::cout << "MES INVALIDO" << std::endl; break;
    }

    return 0;
}