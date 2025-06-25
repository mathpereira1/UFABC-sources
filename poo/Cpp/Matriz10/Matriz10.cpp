#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    std::cin >> n >> m;
    int valor;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> valor;
            std::cout << valor * 10;
            if (j < m - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}