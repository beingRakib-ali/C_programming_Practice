#include <stdio.h>

int sum(int* x, int* y, int* z) {
    return *x + *y + *z;
}

int main() {
    int a, b, c;
    int *p = &a, *q = &b, *r = &c;

    scanf("%d %d %d", p, q, r);

    int results = sum(p, q, r);
    printf("%d", results);
    return 0;
}