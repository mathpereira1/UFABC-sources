#include <iostream>
#include <cmath>     
#include <iomanip>   

int main() {
    long long a;
    std::cin >> a;

    double resultado = sqrt(a);

    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

    return 0;
}