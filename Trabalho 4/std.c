//
// Created by aluno on 22/08/18.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch;
    char s[100];
    char name[100];
    int i = 0;

    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", name);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", name);
    return 0;
}