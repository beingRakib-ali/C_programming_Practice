#include <stdio.h>
void print_element_using_pointer(int *ara[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
}

int main()

{
    int n;
    scanf("%d", &n);

    int *ara[n];

    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    print_element_using_pointer(&ara, n);

    return 0;
}