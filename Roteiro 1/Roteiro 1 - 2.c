#include <stdio.h>
#include <stdlib.h>

int INSS (double *salario){
    if (*salario <= 420){
        *salario *= 0.92;
        return 1;
    }else if (*salario <= 1350){
        *salario *= 0.91;
        return 2;
    }else {
        *salario *= 0.9;
        return 3;
    }
}

int main(void){
    int leao;
    double sal;

    while (1){
        printf("Digite o seu rico dinheirinho: ");
        scanf("%lf", &sal);

        if (sal == 0) break;

        leao = INSS(&sal);

        switch (leao){
        case 1:
            printf("O Leao comeu 8%%\n");
            break;
        case 2:
            printf("O Leao comeu 9%%\n");
            break;
        case 3:
            printf("O Leao comeu 10%%\n");
            break;
        }

        printf("O que restou do seu rico dinheirinho foi: R$%.2lf\n -----------+++++-----------\n", sal);
    }


    return 0;
}
