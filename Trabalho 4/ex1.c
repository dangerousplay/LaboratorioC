//
// Created by dangerous on 26/08/18.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);

    printf("Hello, World!\n");

    printf("%s", s);
    printf("\n");

    return 0;
}