#include<stdio.h>

int buscaBinaria(int *v, int tamanho, int alvo)
{
    int esq = 0, dir = tamanho -1, meio;

    do{
        meio = (esq + dir) / 2;
        
        if (v[meio] == alvo)
        {
            return meio;
        }
        else if (v[meio] > alvo)
        {
            dir = meio - 1;
        }
        else if (v[meio] < alvo)
        {
            esq = meio + 1;
        }
    }while(esq <= dir);

    return -1; 
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    printf("Digite os elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }

    int alvo;

    printf("Qual numero voce quer buscar? ");
    scanf("%d", &alvo);

    int posicao = buscaBinaria(arr, tamanho, alvo); 

    if (posicao != -1) {
        printf("O numero esta na posicao: %d\n", posicao);
    } else {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}
