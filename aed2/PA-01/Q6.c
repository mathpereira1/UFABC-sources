#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO 6 // Reduzido para facilitar os testes

typedef struct {
    int itens[TAMANHO];
    int inicio, fim, total;
} Fila;

void inicializar(Fila *f) { f->inicio = 0; f->fim = -1; f->total = 0; }
bool esta_vazia(Fila *f) { return f->total == 0; }
bool esta_cheia(Fila *f) { return f->total == TAMANHO; }

void enqueue(Fila *f, int valor) {
    if (!esta_cheia(f)) {
        if (f->fim == TAMANHO - 1) f->fim = -1; // Circular
        f->itens[++(f->fim)] = valor;
        f->total++;
    }
}

int dequeue(Fila *f) {
    if (!esta_vazia(f)) {
        int valor = f->itens[f->inicio++];
        if (f->inicio == TAMANHO) f->inicio = 0; // Circular
        f->total--;
        return valor;
    }
    return -1;
}

void apresentar_fila(Fila *f, const char* nome) {
    printf("Fila %s (da frente para tras): ", nome);
    if (esta_vazia(f)) {
        printf("vazia.\n");
        return;
    }
    int i = f->inicio;
    int contador = 0;
    while(contador < f->total){
        printf("%d ", f->itens[i++]);
        if(i == TAMANHO) i = 0;
        contador++;
    }
    printf("\n");
}

void separar_filas(Fila *f1, Fila *f2){
    int tamanho_original = f1->total;
    for(int i = 0; i < tamanho_original; i++){
        int valor = dequeue(f1);
        if(valor % 2 == 0){
            enqueue(f2, valor);
        } else {
            enqueue(f1, valor);
        }
    }
}


int main() {
    Fila f1, f2;
    inicializar(&f1);
    inicializar(&f2);
    int valor;

    printf("--- MENU (QUESTAO 6) ---\n");
    printf("Insira %d elementos na Fila F1:\n", TAMANHO);
    for(int i=0; i<TAMANHO; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &valor);
        enqueue(&f1, valor);
    }
    
    apresentar_fila(&f1, "F1 Original");
    
    separar_filas(&f1, &f2);
    
    printf("\n--- Filas Apos a Separacao ---\n");
    apresentar_fila(&f1, "F1 (Impares)");
    apresentar_fila(&f2, "F2 (Pares)");

    return 0;
}