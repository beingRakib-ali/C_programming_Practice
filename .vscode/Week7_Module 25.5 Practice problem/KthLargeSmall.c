#include <stdio.h>

void kth_Largest(int ara[], int N, int k) {
    int t, i, j;
    for (j = 0; j < N; j++) {
        for (i = 0; i < N - 1; i++) {
            if (ara[i] > ara[i + 1]) {
                t = ara[i + 1];
                ara[i + 1] = ara[i];
                ara[i] = t;
            }
        }
    }

    for (i = 0; i < N; i++) {
        printf("%d ", ara[i]);
    }
    printf("\n");
    printf("%dth largest value is: %d\n", k, ara[N - k]);
}

void kth_Smallest(int ara[], int N, int k) {
    int t, i, j;
    for (j = 0; j < N; j++) {
        for (i = 0; i < N - 1; i++) {
            if (ara[i] > ara[i + 1]) {
                t = ara[i + 1];
                ara[i + 1] = ara[i];
                ara[i] = t;
            }
        }
    }
    for (i = 0; i < N; i++) {
        printf("%d ", ara[i]);
    }
    printf("\n");

    printf("%dth smallest value is: %d", k, ara[k - 1]);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    scanf("%d", &k);

    kth_Largest(ara, n, k);
    kth_Smallest(ara, n, k);

    return 0;
}