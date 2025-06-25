#include <iostream>
#include <iomanip>

int main() {
    double raio;
    const double PI = 3.1415;

    // Loop infinito que só será quebrado quando um raio positivo for inserido
    while (true) {
        std::cout << "Informe o raio: ";
        std::cin >> raio;

        if (raio > 0) {
            double area = PI * raio * raio;
            std::cout << "A area eh: " << std::fixed << std::setprecision(2) << area << std::endl;
            break; // Encerra o loop
        }
    }

    return 0;
}