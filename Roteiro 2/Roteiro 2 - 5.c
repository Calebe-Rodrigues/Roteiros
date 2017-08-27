#include <stdio.h>
#include <stdlib.h>

void BolhaDouble (double *ar, int t, char *sex){
    int i, j = 1;
    double mula;
    char outraMla;

    while (j){
        j = 0;
        for (i=1; i<t; i++){
            if (ar[i] < ar [i-1]){
                j=1;
                mula = ar[i];
                ar[i] = ar[i-1];
                ar[i-1] = mula;
                outraMla = sex[i];
                sex[i] = sex[i-1];
                sex[i-1] = outraMla;
            }
        }
    }
}

double MediaAltura (double ar[], char *gens, char g, int *indQ){
    int i, quant = 0;
    double soma = 0;

    for (i=0; i<10; i++){
        if (gens[i] == g){
            quant++;
            soma += ar[i];
        }
    }
    *indQ = quant;
    return soma/quant;
}


int main(void){
    double alturas[10];
    char genero[10];
    int i, nM, nF;


    for (i=1; i<=10; i++){
        printf("Digite o sexo da #%d pessoa: ", i);
        scanf(" %c", &genero[i-1]);
        printf("Digite a altura da #%d pessoa: ", i);
        scanf("%lf", &alturas[i-1]);
    }

    printf("Os sexos dos individuos mais alto e mais baixo sao %c e %c respectivamente",  genero[9], genero[0]);
    printf("\nMedia de altura Fem: %.2lf", MediaAltura(alturas, genero, 'F', &nF));
    printf("\nMedia de altura Masc: %.2lf", MediaAltura(alturas, genero, 'M', &nM));
    printf("\n%d Homens e %d Mulheres", nM, nF);

    return 0;
}

