#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    if (a == 0) {
        return 1;
    }

    double delta = b * b - 4 * a * c;

    std::cout << std::fixed << std::setprecision(4);

    if (delta < 0) {
        std::cout << "nao ha raiz real" << std::endl;
    } else if (delta == 0) {
        double raiz = -b / (2 * a);
        std::cout << raiz << std::endl;
    } else {
        double raiz1 = (-b + std::sqrt(delta)) / (2 * a);
        double raiz2 = (-b - std::sqrt(delta)) / (2 * a);
        std::cout << raiz1 << " " << raiz2 << std::endl;
    }

    return 0;
}