#include <iostream>

int main() {
    bool p, q;
    std::cin >> std::boolalpha >> p >> q;
    bool vai_um = p && q;
    bool soma = p != q;
    std::cout << std::boolalpha << vai_um << " " << soma << std::endl;
    return 0;
}