#include <stdio.h>

int main() {
    int a, b;

    int *p = &a, *q = &b;

    scanf("%d %d", p, q);

    float avg, sum;

    sum = (*p + *q);
    avg = sum / 2;
    printf("%.3f", avg);
    return 0;
}