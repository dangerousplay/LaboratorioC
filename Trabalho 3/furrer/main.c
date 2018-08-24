//
// Created by aluno on 22/08/18.
//

#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int main(){
    double* notas = calloc(sizeof(double),80);

    printf("Vamos calcular dados sobre notas de 80 alunos.\n");
    printf("Digite 80 notas: \n");

    for(int i = 0; i < 10; i++) {
        double nota = 0;

        scanf("%lf",&nota);

        notas[i] = nota;
    }


    printf("Tabela (feq absoluta, feq relativa): \n\n");

    int* abs = absolute(notas, 5);
    double* rel = relative(abs,5);

    for(int i = 0; i < 11; i++){
        if(abs[i] != 0) {
            printf("Nota %i = %i - %lf \n", i, abs[i], rel[i]);
        }

    }

    free(abs);
    free(rel);
}