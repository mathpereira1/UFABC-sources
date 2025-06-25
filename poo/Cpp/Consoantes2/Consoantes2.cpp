#include <iostream>

int main() {
    char letra;
    std::cin >> letra;
    bool is_lower_alpha = (letra >= 'a' && letra <= 'z');
    bool is_upper_alpha = (letra >= 'A' && letra <= 'Z');
    bool is_vowel = (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
                     letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
    if ((is_lower_alpha || is_upper_alpha) && !is_vowel) {
        std::cout << "SIM" << std::endl;
    }
    return 0;
}