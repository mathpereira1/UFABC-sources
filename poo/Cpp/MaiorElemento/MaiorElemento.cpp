#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    while (std::cin >> n && n != 0) {
        int maior_valor;
        int indice_maior = 0;
        
        for (int i = 0; i < n; ++i) {
            int valor_atual;
            std::cin >> valor_atual;
            if (i == 0 || valor_atual > maior_valor) {
                maior_valor = valor_atual;
                indice_maior = i;
            }
        }
        std::cout << indice_maior << " " << maior_valor << std::endl;
    }

    return 0;
}