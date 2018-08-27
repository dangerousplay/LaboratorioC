//
// Created by aluno on 22/08/18.
//

#include <stdio.h>

int main(){

    int a, b;
    float c, d;

    scanf("%i %i %f %f",&a, &b, &c, &d);

    printf("%i %i\n", (a+b), (a-b));
    printf("%.1f %.1f\n", (c+d), (c-d));

}