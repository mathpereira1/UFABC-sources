#include <iostream>
#include <cmath>     
#include <iomanip>   

int main() {
    double n;
    std::cin >> n;

    double resultado = floor(n);

    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

    return 0;
}