#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int c;
    std::cin >> c;
    while (c--) {
        int n;
        std::cin >> n;
        std::vector<int> notas(n);
        double soma = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> notas[i];
            soma += notas[i];
        }

        double media = soma / n;
        int acima_da_media = 0;
        for (int nota : notas) {
            if (nota > media) {
                acima_da_media++;
            }
        }
        
        double percentual = (double)acima_da_media * 100.0 / n;
        std::cout << std::fixed << std::setprecision(3) << percentual << "%" << std::endl;
    }
    std::cout << std::endl;

    return 0;
}