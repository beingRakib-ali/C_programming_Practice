#include <stdio.h>

void sort_asc(int N, int ara[]);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort_asc(n, arr);
    return 0;
}

void sort_asc(int N, int ara[])
{

    int i;
    int temp;
    int j;
    for(j=0;j<N;j++)
 {
    for (i = 0; i < N; i++)
        {
            if (ara[i]>ara[i+1])
            {
                temp = ara[i+1];
                ara[i+1] = ara[i];  
                ara[i]= temp;
            }
            
        }

 }
 for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
}