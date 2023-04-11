#include <stdio.h>
void find_min_max(int n, int ara[], int* p, int* q) {
    *p = ara[0];
    *q = ara[0];
    int i;
    for (i = 0; i < n; i++) {
        if (ara[i] > *p) {
            *p = ara[i];
        }
        if (ara[i] < *q) {
            *q = ara[i];
        }
    }
}
int main() {
    int ara[] = {12, 66, 43, 78, 13, 21, 8, 9, 5, 3, 100};

    //  printf("%d", sizeof(ara) / sizeof(int));

    int n = sizeof(ara) / sizeof(int);  // sizeof(ara) means (11*4)---Total Element * variable type...  sizeof(ara)/sizeof(int) = 44/4 = 11
    printf("Size of array is: %d\n", n);
    int min, max;
    find_min_max(n, ara, &max, &min);

    printf("%d %d", max, min);
    return 0;
}