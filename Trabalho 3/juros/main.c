//
// Created by aluno on 22/08/18.
//

#include <stdio.h>
#include "math.h"

int main() {
    long double capital, jurosR, tempo;

    printf("Olá, vamos calcular o valor do empréstimo. \n");

    printf("Digite o capital: ");

    scanf("%Lf", &capital);

    printf("Digite o valor do juros: ");

    scanf("%Lf", &jurosR);

    printf("Digite o tempo do capital (meses): ");

    scanf("%Lf", &tempo);

    printf("Juros total capitalizado: %Lf\n", juros(capital, jurosR, tempo));

}

