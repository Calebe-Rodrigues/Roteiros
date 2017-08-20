#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ConvHoras (int *h){
    if (*h > 12){
        *h -= 12;
        return 1;
    }
    return 0;
}

int main(void){
    int h, m;

    scanf("%d:%d;", &h, &m);
    if (ConvHoras(&h) == 1 ){
        printf("%d:%d P.M.", h, m);
    }else
        printf("%d:%d A.M.", h, m);

    return 0;
}

