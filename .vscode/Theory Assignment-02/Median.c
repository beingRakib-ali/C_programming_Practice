#include<stdio.h>

int median(int a[],int n)
{
    int i,j,temp;
    float median;
    for (j = 0; j < n; j++) {
        for (i = 0; i < n - 1; i++) {
            if (a[i] >= a[i + 1]) {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
        if ( n % 2 == 0)
            median = (a[n/2] + a[n/2+1])/2.0 ;
        else
            median = a[n/2 + 1];

        for (i = 1 ; i <= n ; i++)
            printf("%d ", a[i]);
        return median;
    }

    int main() {
        int i,j,n;
        int a[n],t;
        scanf("%d", &n);
        for (i = 1; i <= n ; i++)
            scanf("%d", &a[i]);

        float ans = median(a,n);
        printf("\n%.2f",ans);
    }
    