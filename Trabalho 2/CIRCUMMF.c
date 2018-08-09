//
// Created by aluno on 08/08/18.
//

#include<stdio.h>
#include<math.h>

int main(){
    long double raio = 0;
    const long double PI = 3.1415926535890;

    printf("Digite o raio do círculo: ");
    scanf("%Lf", &raio);

    long double resultado = (2 * raio) * PI;

    printf("O comprimento da circunferência é: %Lf", resultado);
}