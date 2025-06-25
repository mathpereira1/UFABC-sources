#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<double> alturas_homens;
    std::vector<double> pesos_mulheres;

    for (int i = 0; i < 100; ++i) {
        int idade;
        double altura, peso;
        char genero;
        std::cin >> idade >> altura >> peso >> genero;
        if (genero == 'M') {
            alturas_homens.push_back(altura);
        } else if (genero == 'F') {
            pesos_mulheres.push_back(peso);
        }
    }

    if (alturas_homens.empty()) {
        std::cout << "Nao houve entrada de atletas homens." << std::endl;
    } else {
        double soma_alturas = 0;
        for(double h : alturas_homens) soma_alturas += h;
        double media_alturas = soma_alturas / alturas_homens.size();
        int acima_media = 0;
        for(double h : alturas_homens) {
            if (h > media_alturas) acima_media++;
        }
        std::cout << "Ha " << acima_media << " atletas homens acima da media da altura dos homens." << std::endl;
    }

    if (pesos_mulheres.empty()) {
        std::cout << "Nao houve entrada de atletas mulheres." << std::endl;
    } else {
        double soma_pesos = 0;
        for(double w : pesos_mulheres) soma_pesos += w;
        double media_pesos = soma_pesos / pesos_mulheres.size();
        int abaixo_media = 0;
        for(double w : pesos_mulheres) {
            if (w < media_pesos) abaixo_media++;
        }
        std::cout << "Ha " << abaixo_media << " atletas mulheres abaixo da media do peso das mulheres." << std::endl;
    }

    std::cout << std::endl;

    return 0;
}