#include <stdio.h>
void swap(int* p, int* q) {
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}

void bubble_sort(int ara[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ara[j] > ara[j + 1]) {
                swap(&ara[j], &ara[j + 1]);
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    bubble_sort(ara, n);

    return 0;
}