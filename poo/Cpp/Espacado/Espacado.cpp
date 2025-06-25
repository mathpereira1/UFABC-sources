#include <iostream>
#include <string>

int main() {
    std::string palavra;
    while (std::getline(std::cin, palavra)) {
        for (size_t i = 0; i < palavra.length(); ++i) {
            std::cout << palavra[i];
            if (i < palavra.length() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}