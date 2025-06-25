#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tEquipe {
    char nome[100];
    int pontos, vitorias, empates, derrotas, saldoGols, golsPro, golsCon;
};

// Função para comparar equipes para ordenação
int compararEquipes(const void *a, const void *b) {
    struct tEquipe *equipeA = (struct tEquipe *)a;
    struct tEquipe *equipeB = (struct tEquipe *)b;

    // Critério 1: Número de vitórias
    if (equipeA->vitorias != equipeB->vitorias)
        return equipeB->vitorias - equipeA->vitorias;

    // Critério 2: Saldo de gols
    if (equipeA->saldoGols != equipeB->saldoGols)
        return equipeB->saldoGols - equipeA->saldoGols;

    // Critério 3: Gols pró
    return equipeB->golsPro - equipeA->golsPro;
}

int main() {
    // quantidade de equipes
    int n;
    // printf("Digite o numero de equipes:");
    scanf("%d", &n);

    struct tEquipe equipes[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", equipes[i].nome);
    }

    for (int i = 0; i < n; i++) {
        equipes[i].pontos = 0;
        equipes[i].vitorias = 0;
        equipes[i].derrotas = 0;
        equipes[i].empates = 0;
        equipes[i].saldoGols = 0;
        equipes[i].golsPro = 0;
        equipes[i].golsCon = 0;
    }

    for (int i = 0; i < n * (n - 1); i++) {
        int golsMandante, golsVisitante;
        char equipeMandante[100], equipeVisitante[100];
        scanf("%s %d x %d %s", equipeMandante, &golsMandante, &golsVisitante, equipeVisitante);
        for (int j = 0; j < n; j++) {
            if (strcmp(equipes[j].nome, equipeMandante) == 0) {
                equipes[j].golsPro += golsMandante;
                equipes[j].golsCon += golsVisitante;
                equipes[j].saldoGols += golsMandante - golsVisitante;
                if (golsMandante > golsVisitante) {
                    equipes[j].vitorias++;
                    equipes[j].pontos += 3;
                } else if (golsMandante == golsVisitante) {
                    equipes[j].empates++;
                    equipes[j].pontos += 1;
                } else {
                    equipes[j].derrotas++;
                }
            } else if (strcmp(equipes[j].nome, equipeVisitante) == 0) {
                equipes[j].golsPro += golsVisitante;
                equipes[j].golsCon += golsMandante;
                equipes[j].saldoGols += golsVisitante - golsMandante;
                if (golsVisitante > golsMandante) {
                    equipes[j].vitorias++;
                    equipes[j].pontos += 3;
                } else if (golsVisitante == golsMandante) {
                    equipes[j].empates++;
                    equipes[j].pontos += 1;
                } else {
                    equipes[j].derrotas++;
                }
            }
        }
    }

    // Ordena as equipes com base nos critérios usando Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compararEquipes(&equipes[j], &equipes[j + 1]) > 0) {
                struct tEquipe temp = equipes[j];
                equipes[j] = equipes[j + 1];
                equipes[j + 1] = temp;
            }
        }
    }

    // Exibe os resultados finais
    printf("CAMPEAO: %s\n", equipes[0].nome);
    // printf("\nCAMPEAO: %s\n", equipes[0].nome);
    printf("VICE-CAMPEAO: %s\n", equipes[1].nome);
    printf("REBAIXADOS: ");
    for (int i = n - 1; i >= n - 4; i--) { // Inverte a ordem de impressão
        printf("%s", equipes[i].nome);
        if (i > n - 4) {
            if (i == n - 3) {
                printf(" e ");
            } else {
                printf(", ");
            }
        }
    }
    printf("\n");

    printf("TABELA FINAL:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d %d %d %d\n",
               equipes[i].nome, equipes[i].pontos, equipes[i].vitorias, equipes[i].empates,
               equipes[i].derrotas, equipes[i].saldoGols, equipes[i].golsPro, equipes[i].golsCon);
    }
    return 0;
}