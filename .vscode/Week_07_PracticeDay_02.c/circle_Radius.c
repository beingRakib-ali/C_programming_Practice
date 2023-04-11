#include <stdio.h>

float circle_radius(int *x) {
    float n = (*x) * (*x);
    return 3.1416 * n;
}

int main() {
    int *r;
    scanf("%d", &r);

    float results = circle_radius(&r);
    printf("%f", results);

    return 0;
}