#include<stdio.h>

int add_them(int x,int arr[])
{
   int summ = 0;
    for (int i = 0; i < x; i++)
    {
        summ += arr[i];
    }
    return summ;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int summ = add_them(n,arr);
    
    printf("The sum of array is %d\n",summ);

    return 0;
}