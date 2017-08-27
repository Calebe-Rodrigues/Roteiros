#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    char nome[21];
    int i,j, flag = 1;

    scanf("%s", nome);
    j = strlen(nome)-1;
    for (i = 0; i<j; i++){
        if (nome[i] != nome[j]){
            flag = 0;
        }
        j--;
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not palidrome");
    return 0;
}

