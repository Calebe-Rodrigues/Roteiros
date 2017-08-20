#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Triedricprint (char *nome){
    int i, j;

    for (i=1; i<strlen(nome); i++){
        for (j=0; j<=i; j++){
            printf("%c", nome[j]);
        }
        printf("\n");
    }

}


int main(void){
    char nome[21];
    int i;

    scanf("%s", nome);
    Triedricprint(nome);

    return 0;
}

