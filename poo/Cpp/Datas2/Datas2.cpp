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

int main() {
    int d, m, a;
    std::cin >> d >> m >> a;

    bool dataValida = true;

    if (a < 1582) {
        dataValida = false;
    } else if (a == 1582) {
        if (m < 10) {
            dataValida = false;
        } else if (m == 10 && d < 15) {
            dataValida = false;
        }
    }
    
    if (dataValida) {
        if (m < 1 || m > 12) {
            dataValida = false;
        } else if (d < 1 || d > diasNoMes(m, a)) {
            dataValida = false;
        }
    }

    if (dataValida) {
        std::cout << "DATA VALIDA" << std::endl;
    } else {
        std::cout << "DATA INVALIDA" << std::endl;
    }

    return 0;
}
