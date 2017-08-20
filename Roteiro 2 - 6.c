#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    char numero[10];
    int i;

    scanf("%s", numero);
    if (numero[3] == '-' || numero[4] == '-'){
        if (strlen(numero) == 8){
            numero[3] = numero[2];
            numero[2] = numero[1];
            numero[1] = numero[0];
            numero[0] = '3';
        }
        else{
            numero[4] = numero[5];
            numero[5] = numero[6];
            numero[6] = numero[7];
            numero[7] = numero[8];
            numero[8] = '\0';
        }
    }
    else{
        if (strlen(numero) < 8){
            numero[8] = '\0';
            for (i=7; i > 0; i--){
                numero[i] = numero[i-1];
            }
            numero[0] = '3';
        }
    }

    printf("%s", numero);
    return 0;
}

