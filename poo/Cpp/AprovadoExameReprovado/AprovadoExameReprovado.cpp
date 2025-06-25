#include <iostream>

int main() {
    double m;
    int f;
    std::cin >> m >> f;
    if (m < 4.0 || f > 30) {
        std::cout << "Reprovado!" << std::endl;
    } else if (m >= 6.0) {
        std::cout << "Aprovado!" << std::endl;
    } else {
        std::cout << "Exame Final!" << std::endl;
    }
    return 0;
}