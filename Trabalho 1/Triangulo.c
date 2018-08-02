//
// Created by 201810357 on 01/08/2018.
//


#include <stdio.h>
#include <mem.h>
#include <malloc.h>


//distinct
int duplicated(int *array, int Length) {
    int i, j;
    int newlenght = 1;

    for (i = 1; i < Length; i++) {
        for (j = 0; j < newlenght; j++)
            if (array[i] == array[j])
                break;

        if (j == newlenght)
            array[newlenght++] = array[i];
    }
    return newlenght;

}

// This is really bad, you know, because we need some boiler plate in C that is easy in C++ and other
// languangens
int main() {
    int triangulo[3];
    int copy[3];

    printf("Olá, digite os três pontos do triângulo.\n");

    for (int i = 0; i < 3; i++) {
        int temp = 0;
        printf("Digite o %i ponto: \n", i);
        scanf("%i", &temp);
        triangulo[i] = temp;
    }

    switch (duplicated(triangulo, 3)) {
        case 1:
            printf("Triângulo equilátero.\n");
            break;
        case 2:
            printf("Triângulo isóceles.\n");
            break;
        case 3:
            printf("Triângulo escaleno.\n");
            break;
        default:
            break;
    }

}

