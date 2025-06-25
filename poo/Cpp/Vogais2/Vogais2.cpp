#include <iostream>

int main() {
    char letra;
    std::cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        std::cout << "SIM" << std::endl;
    }
    return 0;
}