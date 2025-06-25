#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main () {
    char *n, *numero;

    n = (char *) malloc(102 * sizeof(char));
    numero = (char *) malloc(12 * sizeof(char));
    
    while(scanf("%s %s", n, numero) != EOF){
        for (int i = 0; i < strlen(n) + strlen(numero); i++){
            if (i < strlen(n)){
                printf("%c", n[i]);
            }
            if (i < strlen(numero)){
                printf("%c", numero[i]);
            }
        }
        printf("\n");
    }
    free(n);
    free(numero);
    return 0;

}