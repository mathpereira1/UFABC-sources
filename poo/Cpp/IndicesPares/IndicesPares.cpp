#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    int pares_count = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        if (v[i] % 2 == 0) {
            pares_count++;
        }
    }

    for (int i = 0; i < n; i += 2) {
        std::cout << v[i] << (i == n - 1 || i == n-2 ? "" : " ");
    }
    
    std::cout << " " << pares_count << std::endl;
    std::cout << std::endl;

    return 0;
}