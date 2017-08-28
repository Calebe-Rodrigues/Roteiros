#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[31] ;
    char endereco[51];
    char matricula[11];
    char curso[31];
} tAluno;

tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso (char *curso, int n){
    int i, alunos = 0;

    for (i=0; i<n; i++){
        if (!(strcmp(curso, gAlunos[i].curso)))
            alunos++;
    }
    return alunos;

}

int main(void){
    int nDeAlunos = 0;

    strcpy(gAlunos[0].curso, "Computacao");
    strcpy(gAlunos[1].curso, "Computacao");
    strcpy(gAlunos[2].curso, "Fisica");
    nDeAlunos += 3;

    printf("%d\n", consultaAlunosPorCurso("Computacao", nDeAlunos));

    return 0;
}

