#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<int> pares;
    int valor;

    for (int i = 0; i < n; ++i) {
        std::cin >> valor;
        if (valor % 2 == 0) {
            pares.push_back(valor);
        }
    }

    for (size_t i = 0; i < pares.size(); ++i) {
        std::cout << pares[i] << " ";
    }
    
    std::cout << pares.size() << std::endl;
    std::cout << std::endl;

    return 0;
}