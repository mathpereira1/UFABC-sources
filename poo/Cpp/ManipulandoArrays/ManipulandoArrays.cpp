#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    std::cin >> n >> m;

    std::vector<long long> diff(n + 1, 0);

    for (int i = 0; i < m; ++i) {
        int a, b;
        long long k;
        std::cin >> a >> b >> k;
        diff[a - 1] += k;
        if (b < n) {
            diff[b] -= k;
        }
    }

    long long max_val = 0;
    long long current_val = 0;
    for (int i = 0; i < n; ++i) {
        current_val += diff[i];
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    std::cout << max_val << std::endl;
    std::cout << std::endl;

    return 0;
}