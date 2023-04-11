#include<stdio.h>

int main()
{
  int n,i;
   int arr[]={};
   printf("Enter Array Size: ");
     scanf("%d",&n);
     printf("Array Element: ");
     for ( i = 0; i < n; i++)
     {
        scanf("%d",&arr[i]);
       
         
     }
 printf("Reverse Element: ");
   for ( i = n-1;i>=0 ; i--)
     {
        printf("Reverse Element is %d",arr[i]);
     }

    return 0;
}