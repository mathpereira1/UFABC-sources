#include <stdio.h>

void buscaBinaria(int vetor[], int n, int alvo) {
    int esquerda = 0, direita = n - 1;
    int encontrado = 0;
    
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        // Imprime os elementos descartados
        if (alvo < vetor[meio]) {
            for (int i = meio; i <= direita; i++) {
                printf("%d", vetor[i]);
                if (i < direita) printf(" ");
            }
            printf("\n");
            direita = meio - 1;
        } else if (alvo > vetor[meio]) {
            for (int i = esquerda; i <= meio; i++) {
                printf("%d", vetor[i]);
                if (i < meio) printf(" ");
            }
            printf("\n");
            esquerda = meio + 1;
        } else {
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado) {
        printf("VALOR %d LOCALIZADO NA COLECAO\n", alvo);
    } else {
        printf("VALOR %d NAO LOCALIZADO NA COLECAO\n", alvo);
    }
}

int main() {
    int n;
    
    // Lendo o tamanho do vetor 
    if (scanf("%d", &n) != 1) return 1;
    int vetor[n];
    
    // Lendo os elementos do vetor
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &vetor[i]) != 1) return 1;
    }
    
    int alvo;
    // Processa as buscas até EOF
    while (scanf("%d", &alvo) == 1) {
        buscaBinaria(vetor, n, alvo);
    }
    
    return 0;
}
