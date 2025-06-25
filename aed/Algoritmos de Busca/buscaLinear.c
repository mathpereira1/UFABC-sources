#include <stdio.h>

int busca(int *v, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
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

    int posicao = busca(arr, tamanho, alvo); 

    if (posicao != -1) {
        printf("O numero esta na posicao: %d\n", posicao);
    } else {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}
