#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int FuncIdiota (int n){
    int i, j;

    for (j = 1; j <= n; j++){
        for (i = 0; i<j ; i++){
            printf("%d ", j);
        }
        printf("\n");
    }

}

int main(void){
    int n;

    scanf("%d", &n);
    FuncIdiota(n);
    return 0;
}

