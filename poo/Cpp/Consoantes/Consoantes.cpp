#include <iostream>
#include <cctype>

int main() {
    char c;
    int contador = 0;

    while (std::cin >> c && c != '*') {
        char lower_c = tolower(c);
        bool ehVogal = (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u');
        if (isalpha(c) && !ehVogal) {
            contador++;
        }
    }

    std::cout << contador << std::endl;

    return 0;
}