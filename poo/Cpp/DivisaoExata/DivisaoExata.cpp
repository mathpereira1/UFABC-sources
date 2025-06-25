#include <iostream>

int main() {
    long long x, y;
    std::cin >> x >> y;
    if (x % y == 0) {
        std::cout << "a divisao de " << x << " por " << y << " eh exata." << std::endl;
    }
    return 0;
}