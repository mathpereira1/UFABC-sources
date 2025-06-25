#include <stdlib.h>
#include <stdio.h>

int fatorial(int n);

int main(void) {
    int num, total;

    printf("Informe o numero a ser calculado o N!: ");
    scanf("%d", &num);

    total = fatorial(num);

    printf("N! de %d e': %d\n", num, total);

    system("pause");
    return 0;
}

int fatorial(int n) {
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
}