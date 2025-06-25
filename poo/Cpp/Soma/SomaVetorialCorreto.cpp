#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    while (std::cin >> n && n != 0) {
        std::vector<double> v(n);
        std::vector<double> u(n);
        std::vector<double> w(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        for (int i = 0; i < n; ++i) {
            std::cin >> u[i];
        }

        for (int i = 0; i < n; ++i) {
            w[i] = v[i] + u[i];
        }

        std::cout << std::fixed << std::setprecision(2);
        for (int i = 0; i < n; ++i) {
            std::cout << w[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }
    // std::cout << std::endl; 

    return 0;
}