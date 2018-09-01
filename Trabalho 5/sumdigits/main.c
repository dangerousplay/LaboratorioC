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
        char* n_str = malloc(sizeof(char)*2);
        static char null = '\0';
        char* n_endptr;

        memcpy(n_str, &buffer[i], sizeof(char)*1);

        strcat(n_str,&null);

        int n = strtol(n_str, &n_endptr, 10);

        if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

        free(n_str);

        sum += n;
    }

    free(buffer);
    printf("%d\n", sum);

    return 0;
}