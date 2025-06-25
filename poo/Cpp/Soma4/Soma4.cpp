#include <iostream>

int main() {
    // N é a quantidade de sequências
    int n;
    std::cin >> n;

    // Loop para cada uma das N sequências
    for (int i = 0; i < n; ++i) {
        // M é a quantidade de valores na sequência atual
        int m;
        std::cin >> m;

        long long soma_bloco = 0;
        int valor;

        // Loop para ler os M valores e somá-los
        for (int j = 0; j < m; ++j) {
            std::cin >> valor;
            soma_bloco += valor;
        }
        std::cout << soma_bloco << std::endl;
    }

    return 0;
}