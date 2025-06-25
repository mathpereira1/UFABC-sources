#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a, b_str;
    int b_int;
    std::cin >> a >> b_str;
    std::reverse(a.begin(), a.end());
    if (a == b_str) {
        std::cout << "espelho" << std::endl;
    } else {
        std::cout << "nao espelho" << std::endl;
    }
    return 0;
}