#include<stdio.h>

int buscaBinariaRec(int *v, int esq, int dir, int alvo)
{
    int meio;

    if (esq <= dir)
    {
        meio = (esq + dir) / 2;
        if (v[meio] == alvo)
        {
            return meio;
        }
        else if (v[meio] > alvo)
        {
            return buscaBinariaRec(v, esq, meio - 1, alvo);

        }
        else
        {
            return buscaBinariaRec(v, meio+1, dir, alvo);
        }
    }
    

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

    int posicao = buscaBinariaRec(arr, 0, tamanho - 1, alvo); 

    if (posicao != -1) {
        printf("O numero esta na posicao: %d\n", posicao);
    } else {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}
