#include <iostream>
#include <iomanip>

bool ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        return ehBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    int d, m, a;
    std::cin >> d >> m >> a;

    d++;
    if (d > diasNoMes(m, a)) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            a++;
        }
    }

    std::cout << std::setfill('0') << std::setw(2) << d << " "
              << std::setfill('0') << std::setw(2) << m << " "
              << std::setfill('0') << std::setw(4) << a << std::endl;

    return 0;
}