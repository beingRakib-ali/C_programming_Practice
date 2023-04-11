#include<stdio.h>

int main()

{
    int n,i;
    int arr[2000003];
    scanf("%d",&n);
    int moves = 0;
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for ( i = 1; i < n; i++)
    {
        if (arr[i]<arr[i-1])
        {
            moves += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
        
    }
    printf("%d\n",moves);
    


    return 0;

}