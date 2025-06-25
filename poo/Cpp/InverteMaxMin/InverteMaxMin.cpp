#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::vector<int> v(n);

    int min_val, max_val;
    int min_idx = 0, max_idx = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        if (i == 0) {
            min_val = v[i];
            max_val = v[i];
        } else {
            if (v[i] < min_val) {
                min_val = v[i];
                min_idx = i;
            }
            if (v[i] > max_val) {
                max_val = v[i];
                max_idx = i;
            }
        }
    }

    if (n > 0) {
        std::swap(v[min_idx], v[max_idx]);
    }
    
    for (int i = 0; i < n; ++i) {
        std::cout << v[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}