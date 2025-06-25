#include <iostream>

int main() {
    char letra;
    std::cin >> letra;

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "vogal" << std::endl;
    } else {
        std::cout << "consoante" << std::endl;
    }
    
    return 0;
}