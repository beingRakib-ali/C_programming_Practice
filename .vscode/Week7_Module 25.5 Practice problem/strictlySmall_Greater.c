#include <stdio.h>

void counter(int ara[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (ara[i] != k)
            count++;
    }

    printf("%d", count);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &k);
    counter(ara, n, k);

    return 0;
}