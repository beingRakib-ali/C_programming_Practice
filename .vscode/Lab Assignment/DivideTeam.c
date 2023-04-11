#include<stdio.h>
int main()
{
  int n,i,k;
  int arr[105];
  scanf("%d",&n);
   
   for ( i = 0; i < n; i++)
   {
     scanf("%d",&arr[i]);

   }

   for ( i = 0; i < n; i++)
   {
     scanf("%d",&k);
     if (k==0)
     {
        printf("%d\t",arr[i]);
     }
     else{
        for ( i = k; i < n; i++)
        {
            printf("%d\t",arr[i]);
        }
        
     }
       for(i=0;i<k;i++)
       {
           printf("%d\t",arr[i]);
       }
     
   }
   
   




    return 0;
}