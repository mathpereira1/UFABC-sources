#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // Usamos unsigned long long pois 20! é muito grande
    unsigned long long fatorial = 1;

    // Calcula o fatorial
    for (int i = 2; i <= n; ++i) {
        fatorial *= i;
    }

    std::cout << fatorial << std::endl;

    return 0;
}