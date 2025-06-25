#include <iostream>

int main() {
    int m1, m2;
    std::cin >> m1 >> m2;

    if (m2 >= 0 && m2 <= 2) {
        std::cout << "Nova" << std::endl;
    } else if (m2 >= 97 && m2 <= 100) {
        std::cout << "Cheia" << std::endl;
    } else if (m2 > m1) {
        std::cout << "Crescente" << std::endl;
    } else {
        std::cout << "Minguante" << std::endl;
    }

    return 0;
}