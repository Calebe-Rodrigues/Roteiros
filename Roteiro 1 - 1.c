#include <stdio.h>
#include <stdlib.h>

void Desconto (int idade, double *preco){
    if (idade <= 18){
        *preco *= 0.9;
    }else{
        *preco *= 0.8;
    }
}

int main(void){
    int ida;
    double prec;

    while (1){
        printf("Digita a idade do cliente: ");
        scanf("%d", &ida);

        if (ida == 0) break;

        printf("Digite o preco do sapato: ");
        scanf("%lf", &prec);

        Desconto(ida, &prec);

        printf("Total a pagar: R$%.2lf\n -----------+++++-----------\n", prec);
    }


    return 0;
}
