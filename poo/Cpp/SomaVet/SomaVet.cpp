#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    long long soma = 0;
    int valor;
    for (int i = 0; i < n; ++i) {
        std::cin >> valor;
        soma += valor;
    }
    std::cout << soma << std::endl;
    return 0;
}