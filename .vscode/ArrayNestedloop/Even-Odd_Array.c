#include<stdio.h>

int main()
{
   int n;
   int arr[100];
   int i;
   scanf("%d",&n);
   for ( i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   int e_c = 0,o_c = 0;
   for ( i = 0; i < n; i++)
   {
     if (arr[i]%2==0)

     {
        e_c++;
     }
     else{
        o_c++;
     }

     
   }
   
   
     printf("Number of Evens %d\n",e_c);
     printf("Number of Odds %d\n",o_c);



    return 0;
}