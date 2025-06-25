#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    while (std::cin >> n && n != 0) {
        std::vector<int> v(n);
        int max_val = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            if (v[i] > max_val) {
                max_val = v[i];
            }
        }
        
        std::vector<int> freq(max_val + 1, 0);
        for(int val : v) {
            freq[val]++;
        }

        std::vector<int> acum_freq(max_val + 1, 0);
        acum_freq[0] = freq[0];
        for(int i = 1; i <= max_val; ++i) {
            acum_freq[i] = acum_freq[i-1] + freq[i];
        }

        for (int i = 0; i <= max_val; ++i) {
            std::cout << "[" << i << "] " << acum_freq[i] << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}