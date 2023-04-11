#include <stdio.h>
int main() {
    int i, sumE = 0, Sumodd = 0;
    int sum = 0, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            Sumodd += pow(i, 2);  // 1^2...3^2...5^2
            printf("odd %d \n", i);
        } else {
            sumE -= pow(i, 2);  //
            printf("even %d \n", i);
        }

        //  printf("%d ",i);1
    }
    printf("\n");
    printf("odd %d \n", Sumodd);
    printf("even %d \n", sumE);
    sum = Sumodd + sumE;
    printf("\nsum is %d ", sum);

    return 0;
}
