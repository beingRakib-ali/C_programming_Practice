#include <stdio.h>

int is_leap(int y) {
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))

        return 1;

    else
        return 0;
}

int is_distinct(int n) {
    int ld;
    int count_digits[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (n > 0) {
        ld = n % 10;
        count_digits[ld]++;
        n /= 10;
    }
    int i;
    for (i = 0; i < 10; i++) {
        if (count_digits[i] > 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int year;
    scanf("%d", &year);

    is_leap(year);
    is_distinct(year);

    if (is_leap(year) == 1 && is_distinct(year) == 1)

        printf("Beautiful\n");

    else
        printf("Ugly\n");

    return 0;
}