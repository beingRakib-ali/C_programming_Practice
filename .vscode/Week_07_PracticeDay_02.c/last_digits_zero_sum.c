#include <stdio.h>

void last_digit_zero_sum(int ara[], int n) {
    int i;
    int summ = 0;
    for (i = 0; i < n; i++) {
        if (ara[i] % 10 == 0) {
            summ += ara[i];
        }
    }
    printf("%d", summ);
}

int main() {
    int n;
    scanf("%d", &n);
    int ara[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    last_digit_zero_sum(ara, n);

    return 0;
}