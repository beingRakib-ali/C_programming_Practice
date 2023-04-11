#include <stdio.h>
int fun(int x) {
    
    if (x != 0)

        return x + fun(x - 1);

    else
        return x;
}
int main() {
    int n;
    scanf("%d", &n);

    int result = fun(n);
    printf("%d", result);
    return 0;
}