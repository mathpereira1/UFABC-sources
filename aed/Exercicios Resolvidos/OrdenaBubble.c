#include<stdio.h>

void imprimeVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho-1){
            printf("%d", vetor[i]);
        }
        else
        {
           printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}

void montaVetor(int *vetor, int tamanho) {
    
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void ordenaBubble (int *v, int n, int x, int *trocas) {
    int aux;
    
    if (n == 1) return;
    
    for(int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            (*trocas)++;
            imprimeVetor(v, x);
        }
    }
    
    ordenaBubble(v, n-1, x, trocas);

}


int main (){
    int tamanho, tamanhoIt;
    int trocas = 0;
    scanf("%d", &tamanho);
    tamanhoIt = tamanho;
    int vetor[tamanho];
    montaVetor(vetor, tamanho);
    imprimeVetor(vetor, tamanhoIt);
    ordenaBubble(vetor, tamanho, tamanhoIt, &trocas);
    imprimeVetor(vetor, tamanhoIt);
    printf("Trocas: %d", trocas);
    printf("\n");
    return 0;

}