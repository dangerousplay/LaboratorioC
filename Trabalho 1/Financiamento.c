//
// Created by 201810357 on 01/08/2018.
//

/* Faça um programa em linguagem C que receba o valor do salário de uma pessoa e
   o valor de um financiamento pretendido. Caso o financiamento seja menor ou igual a 5 vezes o
   salário da pessoa, o algoritmo deverá escrever “Financiamento Concedido"; senão, ele deverá
   escrever "Financiamento Negado". Independente de conceder ou não o financiamento, o
   algoritmo escreverá depois a frase "Obrigado por nos consultar."
 *
 * */


#include <stdio.h>


int main() {
    float salario;
    float financiamento;

    printf("Olá, digite o seu salário: ");

    scanf("%f", &salario);

    printf("Digite o valor do financiamento: ");

    scanf("%f", & financiamento);


    if(financiamento <= (salario*5)){
        printf("Financiamento Concedido. \n");
    } else {
        printf("Financiamento Negado. \n");
    }

    printf("Obrigado por nos consultar. \n");
}
