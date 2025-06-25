#include <iostream>

int main () {

    int a, b;
    std::cin >> a >> b;
    int resto = a % b;
    std::cout << resto << std::endl;
    return 0;

}