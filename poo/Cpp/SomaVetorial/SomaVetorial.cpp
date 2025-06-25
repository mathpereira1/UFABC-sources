#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    while (std::cin >> n && n != 0) {
        std::vector<double> v(n);
        std::vector<double> u(n);
        for (int i = 0; i < n; ++i) std::cin >> v[i];
        for (int i = 0; i < n; ++i) std::cin >> u[i];

        std::cout << std::fixed << std::setprecision(2);
        for (int i = 0; i < n; ++i) {
            std::cout << v[i] + u[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }
    return 0;
}