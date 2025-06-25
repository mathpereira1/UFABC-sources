#include <iostream>
#include <vector>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    
    std::vector<std::string> nomes(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nomes[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        std::cout << nomes[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}