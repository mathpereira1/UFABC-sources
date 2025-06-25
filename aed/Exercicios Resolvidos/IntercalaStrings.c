#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    char *s1, *s2, *sr;
    int n1, n2;
    scanf("%d", &n1);
    s1 = (char*) malloc((n1+1) * sizeof(char));
    scanf("%s", s1);
    
    scanf("%d", &n2);
    s2 = (char*) malloc((n2+1) * sizeof(char));
    scanf("%s", s2);

    sr = (char*) malloc((n1+n2+1) * sizeof(char));

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2){
        if (s1[i] <= s2[j]){
            sr[k] = s1[i];
            k++;
            i++;
        }else{
            sr[k] = s2[j];
            k++;
            j++;    
        }
    }

    while (i < n1) {
        sr[k++] = s1[i++];
    }

    // Copia o restante de S2, se houver
    while (j < n2) {
        sr[k++] = s2[j++];
    }

    sr[k] = '\0'; // finaliza a string

    printf("%s\n", sr);

    // Libera a memória
    free(s1);
    free(s2);
    free(sr);

    return 0;
}