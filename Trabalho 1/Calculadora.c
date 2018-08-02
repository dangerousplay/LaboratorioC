//
// Created by 201810357 on 01/08/2018.
//


#include <stdio.h>

int main(){
    double v1, v2, resultado;
    int operacao = 0;

    printf("Olá, digite o primeiro valor: ");
    scanf("%lf", &v1);

    printf("Olá, digite o segundo valor: ");
    scanf("%lf", &v2);


    printf("Digite a operação de acordo: \n"
           "1 – Adição, \n"
           "2 – Subtração, \n"
           "3 – Multiplicação e \n"
           "4 – Divisão \n");

    scanf("%i", &operacao);

    switch(operacao){
        case 1:
            resultado = v1 + v2;
            break;
        case 2:
            resultado = v1 - v2;
            break;
        case 3:
            resultado = v1 * v2;
            break;
        case 4:
            resultado = v1 / v2;
            break;
        default:
            break;
    }

    printf("Resultado: %lf", resultado);
}