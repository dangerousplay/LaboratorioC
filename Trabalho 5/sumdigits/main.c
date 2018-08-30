//
// Created by aluno on 29/08/18.
//



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int sum = 0;

    scanf("%d", &n);

    char *buffer = malloc(sizeof(char)*6);

    snprintf(buffer, 6, "%d", n);

    for(int i = 0; i < strlen(buffer); i++){
        char* n_endptr = malloc(sizeof(char)*6);
        char null = '\0';
        memcpy();

        char* n_str = strcat(n_endptr,&null);

        int n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        sum += n;
    }

    printf("%d\n", sum);

    return 0;
}