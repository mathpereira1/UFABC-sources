#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3 // Reduzido para facilitar os testes

void inserir_elementos(int s[], int n) {
    printf("Digite os %d elementos do array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &s[i]);
    }
}

void apresentar_array(int s[], int n, const char* mensagem) {
    printf("%s: ", mensagem);
    for (int i = 0; i < n; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
}

void inverter_array(int s[], int n) {
    int esquerda = 0;
    int direita = n - 1;
    while (esquerda < direita) {
        // Troca os elementos
        int temp = s[esquerda];
        s[esquerda] = s[direita];
        s[direita] = temp;

        // Move os ponteiros
        esquerda++;
        direita--;
    }
}

int main() {
    int s[TAMANHO];
    int opcao;
    int inserido = 0; // Flag para verificar se os dados foram inseridos

    do {
        printf("\n--- MENU (QUESTAO 3) ---\n");
        printf("1) Inserir elemento no array\n");
        printf("2) Apresentar array original\n");
        printf("3) Apresentar array invertido\n");
        printf("4) Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserir_elementos(s, TAMANHO);
                inserido = 1;
                break;
            case 2:
                if (inserido) {
                    apresentar_array(s, TAMANHO, "Array Original");
                } else {
                    printf("Por favor, insira os elementos primeiro (Opcao 1).\n");
                }
                break;
            case 3:
                if (inserido) {
                    inverter_array(s, TAMANHO);
                    apresentar_array(s, TAMANHO, "Array Invertido");
                    // Inverte de volta para manter o original para a opção 2
                    inverter_array(s, TAMANHO);
                } else {
                    printf("Por favor, insira os elementos primeiro (Opcao 1).\n");
                }
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}