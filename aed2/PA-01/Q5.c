#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO 5 // Reduzido para facilitar os testes

typedef struct {
    int itens[TAMANHO];
    int topo;
} Pilha;

void inicializar(Pilha *p) { p->topo = -1; }
bool esta_vazia(Pilha *p) { return p->topo == -1; }
bool esta_cheia(Pilha *p) { return p->topo == TAMANHO - 1; }
void push(Pilha *p, int valor) { if (!esta_cheia(p)) p->itens[++(p->topo)] = valor; }
int pop(Pilha *p) { if (!esta_vazia(p)) return p->itens[(p->topo)--]; return -1; }

void apresentar_pilha(Pilha *p, const char* nome) {
    printf("Pilha %s (do topo para a base): ", nome);
    if (esta_vazia(p)) {
        printf("vazia.\n");
        return;
    }
    for (int i = p->topo; i >= 0; i--) {
        printf("%d ", p->itens[i]);
    }
    printf("\n");
}

void separar_pilhas(Pilha *p1, Pilha *p2) {
    Pilha p_temp;
    inicializar(&p_temp);

    while (!esta_vazia(p1)) {
        push(&p_temp, pop(p1));
    }

    while (!esta_vazia(&p_temp)) {
        int valor = pop(&p_temp);
        if (valor % 2 == 0) {
            push(p2, valor);
        } else {
            push(p1, valor);
        }
    }
}

int main() {
    Pilha p1, p2;
    inicializar(&p1);
    inicializar(&p2);
    int opcao, valor;
    
    printf("--- MENU (QUESTAO 5) ---\n");
    printf("Insira %d elementos na Pilha P1:\n", TAMANHO);
    for(int i=0; i<TAMANHO; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &valor);
        push(&p1, valor);
    }
    
    apresentar_pilha(&p1, "P1 Original");
    
    separar_pilhas(&p1, &p2);
    
    printf("\n--- Pilhas Apos a Separacao ---\n");
    apresentar_pilha(&p1, "P1 (Impares)");
    apresentar_pilha(&p2, "P2 (Pares)");

    return 0;
}