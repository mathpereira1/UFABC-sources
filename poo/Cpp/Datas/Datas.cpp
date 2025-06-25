#include <iostream>

bool ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        return ehBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    return 31;
}

bool ehDataValida(int d, int m, int a) {
    if (a < 1582) return false;
    if (a == 1582 && m < 10) return false;
    if (a == 1582 && m == 10 && d < 15) return false;
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > diasNoMes(m, a)) return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int d, m, a;
        std::cin >> d >> m >> a;
        if (ehDataValida(d, m, a)) {
            std::cout << "DATA VALIDA\n";
        } else {
            std::cout << "DATA INVALIDA\n";
        }
    }
    return 0;
}