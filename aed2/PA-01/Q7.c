#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 9

void inserir_elementos(int a[], int n) {
    printf("Digite os %d elementos do array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void apresentar_array(int a[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void encontrar_moda(int a[], int n, int *moda, int *freq) {
    *moda = a[0];
    *freq = 0;

    for (int i = 0; i < n; i++) {
        int contagem_atual = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                contagem_atual++;
            }
        }
        if (contagem_atual > *freq) {
            *freq = contagem_atual;
            *moda = a[i];
        }
    }
}

int main() {
    int a[TAMANHO];
    int opcao;
    int moda, frequencia;
    int inserido = 0;

    do {
        printf("\n--- MENU (QUESTAO 7) ---\n");
        printf("1) Inserir elementos no array\n");
        printf("2) Apresentar array\n");
        printf("3) Apresentar a moda e sua frequencia\n");
        printf("4) Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserir_elementos(a, TAMANHO);
                inserido = 1;
                break;
            case 2:
                if (inserido) apresentar_array(a, TAMANHO);
                else printf("Insira os elementos primeiro.\n");
                break;
            case 3:
                if (inserido) {
                    encontrar_moda(a, TAMANHO, &moda, &frequencia);
                    printf("A moda do conjunto e: %d\n", moda);
                    printf("Ela se repete %d vezes.\n", frequencia);
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