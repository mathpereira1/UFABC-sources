#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    std::cin >> n >> m;
    long long somatorio = 0;
    int valor;
    for (int i = 0; i < n * m; ++i) {
        std::cin >> valor;
        somatorio += valor;
    }
    std::cout << "Somatorio da Matriz: " << somatorio << std::endl;
    return 0;
}