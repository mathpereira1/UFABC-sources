#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string palavra;
    while (std::cin >> palavra) {
        std::reverse(palavra.begin(), palavra.end());
        std::cout << palavra << std::endl;
    }
    return 0;
}