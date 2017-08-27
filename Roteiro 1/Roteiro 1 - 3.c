#include <stdio.h>
#include <stdlib.h>


int main(void){
    int valor1, valor2, maior=0;

    while (1){
        printf("\nDigite um numero, qualquer numero: ");
        scanf("%d", &valor1);
        if (valor1==0) break;
        if (valor1 > maior){
            printf("\nAlakazanha! %d\n", valor1);
            maior = valor1;
        }
        printf("\nDigite um numero, qualquer numero: ");
        scanf("%d", &valor2);
        if (valor2==0) break;
        if (valor2 > maior){
            printf("\nAbracadeira! %d\n", valor2);
            maior = valor2;
        }
    }
    return 0;
}
