//
// Created by dangerous on 01/09/18.
//


#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define Size 50000

int nextSpace(char *string, int size, int start){

    int i = 0;


    for(char tmp = string[start+i]; i < size && tmp != ' '; i++){
        tmp = string[start+i];
    }

    return i;
}

int main() {
    int size = 0;
    char teste[Size];
    int *numbers;
    long sum = 0;

    scanf("%d", &size);

    scanf("\n");

    scanf("%[^\n]%*c", teste);

    numbers = calloc(size, sizeof(int));

    for(int i = 0, x = 0; teste[i] != '\0' && i < Size; x++){
        if(teste[i] == ' ' && i++)
            continue;

        char* n_endptr;

        int next = nextSpace(teste, Size, i);

        char tmp[next+1];

        strncpy(tmp, (teste+i), next);
        char* n_str = strcat(tmp, "\0");

        int n = strtol(n_str, &n_endptr, 10);

        i += next;
        sum += n;
        numbers[x] = n;
    }

    printf("%li\n", sum);
}