#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[31] ;
    char estilo[31];
    int nIntegranes, rank;
} tBanda;

void PreencerBandas (tBanda *banda){
    int i;

    for (i=0; i<5; i++){
        printf("Banda #%d:\n", i+1);
        printf("Nome: ");
        scanf("%s", banda[i].nome);
        printf("Estilo: ");
        scanf("%s", banda[i].estilo);
        printf("Numero de integrantes: ");
        scanf("%d", &banda[i].nIntegranes);
        printf("Rank: ");
        scanf("%d", &banda[i].rank);
        printf("--------------------------\n\n");
    }

}

void FindBandaRank (tBanda *umaBanda){
    int i, n;

    printf("Insira o rank da banda: ");
    scanf("%d", &n);

    for (i=0; i<5; i++){
        if (umaBanda[i].rank == n){
            printf("Banda #%d:\n", i+1);
            printf("Nome: %s\n", umaBanda[i].nome);
            printf("Estilo: %s\n", umaBanda[i].estilo);
            printf("Numero de integrantes: %d\n", umaBanda[i].nIntegranes);
            printf("Rank: %d\n", umaBanda[i].rank);
            printf("--------------------------\n\n");
        }
    }

}

void FindBandaEstilo (tBanda *umaBanda){
    int i;
    char pistilo[31];

    printf("Insira o estilo da banda: ");
    scanf("%s", pistilo);

    for (i=0; i<5; i++){
        if (!(strcmp(umaBanda[i].estilo, pistilo))){
            printf("Banda #%d:\n", i+1);
            printf("Nome: %s\n", umaBanda[i].nome);
            printf("Estilo: %s\n", umaBanda[i].estilo);
            printf("Numero de integrantes: %d\n", umaBanda[i].nIntegranes);
            printf("Rank: %d\n", umaBanda[i].rank);
            printf("--------------------------\n\n");
        }
    }

}

int QualBandaVcGosta (tBanda *banda){
    char nomeB[31];
    int i, flag = 0;

    scanf("%s", nomeB);

    for (i=0; i<5; i++){
        if (strcmp(banda[i].nome, nomeB)){
            flag = 1;
        }
    }
    return flag;
}

int main(void){
    tBanda best5[5];
    int i;

    PreencerBandas(best5);


    for (i=0; i<5; i++){
        printf("Banda #%d:\n", i+1);
        printf("Nome: %s\n", best5[i].nome);
        printf("Estilo: %s\n", best5[i].estilo);
        printf("Numero de integrantes: %d\n", best5[i].nIntegranes);
        printf("Rank: %d\n", best5[i].rank);
        printf("--------------------------\n\n");
    }

    return 0;
}

