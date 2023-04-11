#include <stdio.h>

void Sum_aschii(char name[]) {
    int n;
    int sum = 0;
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        sum += name[i] - 96;
    }

    while (sum % 2 == 0) {
        count++;
        sum /= 2;
    }
    if (sum == 1) {
        printf("Yes\n");
    }

    else {
        printf("No\n");
    }
    printf("cost=2^%d", count);
}

int main() {
    char name[100];
    scanf("%s", &name);

    Sum_aschii(name);

    return 0;
}