#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {

    int at = *a;

    *a += *b;
    *b -= at;

    *b = fabs(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}