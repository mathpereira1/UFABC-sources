#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4 // Reduzido para facilitar os testes

// Função de comparação para o qsort
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void inserir_e_ordenar(int a[], int n) {
    printf("Digite os %d elementos do array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    // Ordena o array - pré-requisito para a busca binária
    qsort(a, n, sizeof(int), comparar);
    printf("Array inserido e ordenado com sucesso!\n");
}

void apresentar_array(int a[], int n) {
    printf("Array Ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int busca_binaria(int a[], int n, int x) {
    int esquerda = 0, direita = n - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (a[meio] == x) return meio; // Encontrado
        if (a[meio] < x) esquerda = meio + 1; // Busca na direita
        else direita = meio - 1; // Busca na esquerda
    }
    return -1; // Não encontrado
}

int main() {
    int a[TAMANHO];
    int opcao, x, resultado;
    int inserido = 0;

    do {
        printf("\n--- MENU (QUESTAO 4) ---\n");
        printf("1) Inserir elementos no array (sera ordenado)\n");
        printf("2) Apresentar array\n");
        printf("3) Informar elemento a ser buscado\n");
        printf("4) Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserir_e_ordenar(a, TAMANHO);
                inserido = 1;
                break;
            case 2:
                if (inserido) apresentar_array(a, TAMANHO);
                else printf("Insira os elementos primeiro.\n");
                break;
            case 3:
                if (inserido) {
                    printf("Digite o elemento a ser buscado: ");
                    scanf("%d", &x);
                    resultado = busca_binaria(a, TAMANHO, x);
                    if (resultado != -1) {
                        printf("Elemento %d encontrado na posicao %d.\n", x, resultado);
                    } else {
                        printf("Elemento %d NAO encontrado no array.\n", x);
                    }
                } else {
                    printf("Insira os elementos primeiro.\n");
                }
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}