#include <iostream>

int main() {
    double m;
    int f;
    std::cin >> m >> f;
    if (m >= 6.0 && f <= 30) {
        std::cout << "Aprovado!" << std::endl;
    } else {
        std::cout << "Reprovado!" << std::endl;
    }
    return 0;
}