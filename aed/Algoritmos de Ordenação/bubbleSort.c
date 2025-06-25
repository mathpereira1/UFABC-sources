#include<stdio.h>

void bubbleSort(int *v, int n)
{
    int i, j, aux;
    for(i = 0; i< n-1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(v[j] > v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void mostrarVetor(int *v, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = {4, 6, 9, 1};

    bubbleSort(numeros, 4);
    mostrarVetor(numeros, 4);

    return 0;
}