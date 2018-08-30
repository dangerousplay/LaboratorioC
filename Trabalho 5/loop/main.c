#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX(a,b) a>b ? a:b
#define MIN(a,b) a<b ? a:b

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    for(int i = MIN(a,b); i < MAX(a,b); i++) {
        if(i <= 9 && i >= 1){
            switch (i){
                case 1:
                    printf("one");
                    break;
                case 2:
                    printf("two");
                    break;
                case 3:
                    printf("three");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("five");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eight");
                    break;
                case 9:
                    printf("nine");
                    break;
            }
        } else if (i > 9){
            if((i & 1) == 0)
                printf("eden");
            else
                printf("odd");
        }

    }

    return 0;
}

