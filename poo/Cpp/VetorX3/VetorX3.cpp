#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    int valor;
    for (int i = 0; i < n; ++i) {
        std::cin >> valor;
        std::cout << valor * 3 << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
    return 0;
}