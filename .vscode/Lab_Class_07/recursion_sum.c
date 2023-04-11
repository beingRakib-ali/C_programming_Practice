#include <stdio.h>

int S(int n) {
    if (n == 1)
        return 1;
    else
        return S(n - 1) + n;
}

int main() {
    int n;
    scanf("%d", &n);

    int sum;
    sum = S(n);
    printf("%d", sum);

    return 0;
}