#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Fibonacci (int indice){
    static int cont = 0;
    printf(" (%d) ", ++cont);

    if (indice == 1 || indice == 2){
        return 1;
    }
    else{
        return Fibonacci(indice -1) + Fibonacci(indice -2);
    }
    }

int main(void){
    int indice, i;

    printf("Digite quantos termos tera a sequencia: ");
    scanf("%d", &indice);

    for (i = 1; i<=indice; i++){
        printf("%d ", Fibonacci(i));
    }

    return 0;
}

