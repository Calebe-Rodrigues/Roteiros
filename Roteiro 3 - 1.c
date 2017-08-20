#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    char nome[21];
    int i;

    scanf("%s", nome);

    for (i=0; i<strlen(nome); i++){
        printf("%c\n", nome[i]);
    }
    return 0;
}

