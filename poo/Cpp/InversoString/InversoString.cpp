#include <iostream>
#include <vector>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<std::string> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        std::cout << v[i] << (i == 0 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}