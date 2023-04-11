#include <stdio.h>

int ratio(int a, int b)
{
    float ans = (fact(a) * 1.0) / (fact(b) * 1.0);
    return ans;
}

int fact(int x)
{
    int result = 1, i;
    for (i = 1; i <= x; i++)
    {

        result = result * i;
    }

    return result;
}

int main()
{
    int n, m;
    scanf("%d %d", &m, &n); 

    float result;
    result = ratio(m, n);
    printf("Ratio: %.3f", result);

    return 0;
}