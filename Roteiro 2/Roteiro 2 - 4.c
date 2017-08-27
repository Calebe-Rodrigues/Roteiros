#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Eh_divisivel (int val, int div){
    if (val % div == 0)return 1;
    else return 0;
}

int Eh_primo (int n){
    int i, ehprimo = 1;

    for (i = 2; i<n; i++){
        if (Eh_divisivel(n, i))
            ehprimo = 0;
    }

    return ehprimo;
}


int main(void){
    int n;

    scanf("%d", &n);

    printf("%d", Eh_primo(n));
    return 0;
}

