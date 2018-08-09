//
// Created by aluno on 08/08/18.
//

#include<stdio.h>
#include<limits.h>
int main(){

    printf("Tamanho do tipo int: %i bits \n",sizeof(int)*8);
    printf("Tamanho máximo do tipo int: %i \n",INT_MAX);
    printf("Tamanho mínimo do tipo int: %i \n", INT_MIN);


    switch (sizeof(int)){
        case 2:
            printf("Arquitetura 32 bits.");
            break;
        case 4:
            printf("Arquitetura 64 bits.");
            break;
    }
}
