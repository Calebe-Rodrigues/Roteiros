#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int indice ,i, val1 = 1, val2 = 1, soma;

    printf("Digite quantos termos tera a sequencia: ");
    scanf("%d", &indice);

    for (i = 1; i<=indice; i++){
        soma = val1 + val2;
        if (i == 1 || i == 2)
            printf("1 ");
        else{
            if (i % 2 == 0) val1 = soma;
            else val2 = soma;
            printf("%d ", soma);
        }
    }

    return 0;
}

