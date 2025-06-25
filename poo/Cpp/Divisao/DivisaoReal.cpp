#include <iostream>
#include <iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;


    double resultado = static_cast<double>(a) / b;

    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

    return 0;
}