#include <iostream>
#include <cmath>     
#include <iomanip>   

int main() {
    
    double a, n;
    std::cin >> a >> n;

    double resultado = pow(a, n);

    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

    return 0;
}