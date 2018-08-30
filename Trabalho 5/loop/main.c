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

    for(int i = MIN(a,b); i <= (a>b ? a : b); i++) {
        if(i <= 9 && i >= 1){
            switch (i){
                case 1:
                    printf("one\n");
                    break;
                case 2:
                    printf("two\n");
                    break;
                case 3:
                    printf("three\n");
                    break;
                case 4:
                    printf("four\n");
                    break;
                case 5:
                    printf("five\n");
                    break;
                case 6:
                    printf("six\n");
                    break;
                case 7:
                    printf("seven\n");
                    break;
                case 8:
                    printf("eight\n");
                    break;
                case 9:
                    printf("nine\n");
                    break;
            }
        } else if (i > 9){
            if((i & 1) == 0)
                printf("even\n");
            else
                printf("odd\n");
        }

    }

    return 0;
}

