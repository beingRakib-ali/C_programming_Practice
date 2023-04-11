#include<stdio.h>

int main()
{
   int n,k,i;
   int arr[100];
   scanf("%d %d",&n,&k);

   for ( i = 0; i <n; i++)
   {
     scanf("%d",&arr[i]);
   }
   int count = 0;
   for ( i = 0; i < n; i++)
   {
     if (arr[i]<k)
     {
        count++;
     }
     
   }
   printf("%d",count);
   
   



    return 0;
}