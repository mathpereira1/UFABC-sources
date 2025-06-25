#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<double> g1(n), g2(n), g3(n);
    double soma1 = 0, soma2 = 0, soma3 = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> g1[i] >> g2[i] >> g3[i];
        soma1 += g1[i];
        soma2 += g2[i];
        soma3 += g3[i];
    }
    double media1 = soma1 / n;
    double media2 = soma2 / n;
    double media3 = soma3 / n;
    int abaixo1 = 0, abaixo2 = 0, abaixo3 = 0;
    for (int i = 0; i < n; ++i) {
        if (g1[i] < media1) abaixo1++;
        if (g2[i] < media2) abaixo2++;
        if (g3[i] < media3) abaixo3++;
    }
    std::cout << "Na 1a. atividade " << abaixo1 << " alunos tiveram nota abaixo da media." << std::endl;
    std::cout << "Na 2a. atividade " << abaixo2 << " alunos tiveram nota abaixo da media." << std::endl;
    std::cout << "Na 3a. atividade " << abaixo3 << " alunos tiveram nota abaixo da media." << std::endl;
    return 0;
}