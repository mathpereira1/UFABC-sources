#include <iostream>
#include <string>

int main() {
    std::string palavra;
    std::string maiorPalavra;
    bool primeira = true;

    while (std::cin >> palavra) {
        if (primeira || palavra.length() > maiorPalavra.length()) {
            maiorPalavra = palavra;
            primeira = false;
        }
    }

    if (primeira) {
        std::cout << "Nenhuma palavra foi informada" << std::endl;
    } else {
        std::cout << "A maior palavra informada foi " << maiorPalavra << std::endl;
    }

    return 0;
}