#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double Pjogador (int tVotos, int jVotos){
    return (jVotos*100)/tVotos;
}


int main(void){
    int nVotos = 0, voto = 1, jogadores[23] = {0};
    int i, melhor, maior = 0;


    printf("Qneute: Quem foi o melhor jogador?\n\n");

    while (1){
        printf("Numero do jogador (0=fim) : ");
        scanf("%d", &voto);
        if (voto == 0) break;
        if (voto > 23 || voto < 0)
            printf("Numero invalido:\n");
        else jogadores[voto]++;
        nVotos ++;
    }
    printf("\n Resultado da votacao:\n"
           "Foram computados %d votos.\n"
           "Jogador    Votos    %%", nVotos);

    for (i=0; i<23; i++){
        if (jogadores[i] > maior){
            melhor = i;
            maior = jogadores[i];
        }

        if (i<10){
            if (jogadores[i] > 0){
                printf("\n%d          %d        %.1lf%%", i, jogadores[i], Pjogador(nVotos, jogadores[i]));
            }
        }else
            if (jogadores[i] > 0){
                printf("\n%d         %d        %.1lf%%", i, jogadores[i], Pjogador(nVotos, jogadores[i]));
            }
    }

    printf("\nO melhor jogador foi o número %d, com %d votos, correspondendo a %.1lf%% do total de votos.", melhor, maior, Pjogador(nVotos, maior));

    return 0;
}

