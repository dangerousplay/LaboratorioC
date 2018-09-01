//
// Created by dangerous on 30/08/18.
//

#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main(){

    int size;
    scanf("%d", &size);

    int size2len = size*2 - 1;

    for(int x = 0; x < size2len; x++){
        for(int y = 0; y < size2len; y++){
            int min = x < y ? x : y;
            min = min < size2len-x ? min : size2len-x-1;
            min = min < size2len-y-1 ? min : size2len-y-1;

            printf("%d ", size-min);
        }
        printf("\n");
    }
    return 0;


}