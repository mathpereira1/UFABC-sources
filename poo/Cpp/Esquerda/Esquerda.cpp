#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string comandos;
    std::cin >> comandos;

    int direcao = 0;
    char direcoes[] = {'N', 'L', 'S', 'O'};

    for (char comando : comandos) {
        if (comando == 'D') {
            direcao = (direcao + 1) % 4;
        } else if (comando == 'E') {
            direcao = (direcao - 1 + 4) % 4;
        }
    }

    std::cout << direcoes[direcao] << std::endl;

    return 0;
}