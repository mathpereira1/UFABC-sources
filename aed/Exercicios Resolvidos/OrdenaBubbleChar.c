#include<stdio.h>

void imprimeVetor(char *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(i == tamanho-1) {
            printf("%c", vetor[i]);
        } else {
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");
}

void montaVetor(char *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        scanf(" %c", &vetor[i]);
    }
}

void ordenaBubble(char *v, int n, int *trocas) {
    char aux;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                (*trocas)++;
                imprimeVetor(v, n);
            }
        }
    }
}

int main() {
    int tamanho, trocas = 0;
    scanf("%d", &tamanho);
    char vetor[tamanho];
    montaVetor(vetor, tamanho);
    imprimeVetor(vetor, tamanho);
    ordenaBubble(vetor, tamanho, &trocas);
    imprimeVetor(vetor, tamanho);
    printf("Trocas: %d", trocas);
    printf("\n");
    return 0;
}