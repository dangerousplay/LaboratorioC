//
// Created by aluno on 15/08/18.
//

#include<stdio.h>
#include"math.h"
#include<string.h>
#include <stdlib.h>

const char* operations = "Operations: / * - +\n";

void printHelp(){
    printf("Usage: [number1] [operation] [number2]\n");
    printf(operations);
}

int main(int arg, char **args) {
    long double number1, number2, result;
    char *end;

    if (arg < 3) {
        printHelp();
        return 1;
    }

    number1 = strtold(args[1],&end);
    number2 = strtold(args[3],&end);

    switch (args[2][0]){
        case '-':
           result = subtract(number1, number2);
            break;
        case '/':
            result = divide(number1, number2);
            break;
        case '*':
            result = times(number1, number2);
            break;
        case '+':
            result = sum(number1, number2);
            break;
        default:
            printf("Invalid operation type: %c \n", *args[1]);
            printHelp();
            return 1;
    }

    printf("Result: %Lf \n", result);

    return 0;
}