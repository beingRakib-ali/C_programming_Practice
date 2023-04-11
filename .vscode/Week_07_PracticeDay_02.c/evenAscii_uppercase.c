#include <stdio.h>

void even_ascii_value_uppercase(char str[]) {
    int i;
    for (i = 0; i < str[i] != '\0'; i++) {
        if (str[i] % 2 == 0) {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}
int main() {
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", &str);
    even_ascii_value_uppercase(str);
    return 0;
}