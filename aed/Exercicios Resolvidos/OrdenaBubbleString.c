#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bubbleSortChar(char **vetor, int n, int *troca);
void imprimirVetor(char **vetor, int inicio, int fim);
int compararStrings(char *s1, char *s2);

int main()
{
    int n, qtdTroca = 0;
    scanf("%d", &n);

    char **vetor = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        vetor[i] = (char *)malloc(100 * sizeof(char));
        scanf("%s", vetor[i]);
    }
    

    imprimirVetor(vetor, 0, n-1);
    bubbleSortChar(vetor, n, &qtdTroca);
    imprimirVetor(vetor, 0, n-1);
    printf("Trocas: %d\n", qtdTroca);

    for (int i = 0; i < n; i++) {
        free(vetor[i]);
    }
    free(vetor);

    return 0;
}

void bubbleSortChar(char **vetor, int n, int *qtdTroca)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compararStrings(vetor[j], vetor[j+1]) > 0)
            {
                char *temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
                *qtdTroca += 1;

                imprimirVetor(vetor, 0, n-1);
            }
        }
    }
}

int compararStrings(char *s1, char *s2)
{
    for (int i = 0; i < strlen(s1) || i < strlen(s2); i++)
    {
        if(s1[i] > s2[i])
        {
            return 1;
        }
        else if (s1[i] < s2[i])
        {
            return -1;
        }
    }
    return 0;
}

void imprimirVetor(char **vetor, int inicio, int fim)
{
    for (int i = inicio; i <= fim; i++)
    {
        if(i == fim)
        {
            printf("%s\n", vetor[i]);
        }
        else
        {
            printf("%s ", vetor[i]);
        }
    }
}