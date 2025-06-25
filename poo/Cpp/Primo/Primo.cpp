#include <iostream>
#include <cmath>

int main() {
    int k;
    std::cin >> k;

    bool primo = true;
    if (k <= 1) {
        primo = false;
    } else {
        // Verifica divisores de 2 até a raiz quadrada de K
        for (int i = 2; i * i <= k; ++i) {
            if (k % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        std::cout << "PRIMO" << std::endl;
    } else {
        std::cout << "COMPOSTO" << std::endl;
    }

    return 0;
}