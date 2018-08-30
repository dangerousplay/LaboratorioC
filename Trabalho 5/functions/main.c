//
// Created by aluno on 29/08/18.
//

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    if(a >= b && a >= c && a >= d){
        return a;
    } else if (b >= a && b >= d && b >= c) {
        return b;
    } else if (c >= a && c >= d && c >= b) {
        return c;
    }

    return a;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);

    return 0;
}