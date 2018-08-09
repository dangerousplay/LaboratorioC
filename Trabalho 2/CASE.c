//
// Created by aluno on 08/08/18.
//
#include<stdio.h>
#include <ctype.h>

int main(){
    char character = '\0';

    printf("Digite o caráctere UPPER CASE: ");

    scanf("%c",&character);

    printf("Caráctere em lower case: %c", tolower(character));
}