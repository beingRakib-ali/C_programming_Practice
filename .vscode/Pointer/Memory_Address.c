#include <stdio.h>

int main() {
    int x = 4, b;
    printf("%p\n%p\n", &x, &b);

    int i;
    int ara[7] = {2, 3, 4, 2, 5, 6, 3};

    for (i = 0; i < 7; i++) {
        printf("%p\n", &ara[i]);
    }

    return 0;
}