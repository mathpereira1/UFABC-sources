#include<stdio.h>

void bubbleSortRec(int *v, int n)
{
    int aux;
    
    if (n == 1) return;

    for(int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
    }

    bubbleSortRec(v, n-1);
}

void mostrarVetor(int *v, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = {4, 6, 9, 1};

    bubbleSortRec(numeros, 4);
    mostrarVetor(numeros, 4);

    return 0;
}