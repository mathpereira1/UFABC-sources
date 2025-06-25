#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    int menor_valor = 0;
    int posicao = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> x[i];
        if (i == 0 || x[i] < menor_valor) {
            menor_valor = x[i];
            posicao = i;
        }
    }

    std::cout << "Menor valor: " << menor_valor << std::endl;
    std::cout << "Posicao: " << posicao << std::endl;
    std::cout << std::endl;

    return 0;
}