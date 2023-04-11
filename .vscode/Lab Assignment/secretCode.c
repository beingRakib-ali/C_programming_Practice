#include<stdio.h>

int main()
{
  int n,i,j;
  int arr[10000];
  scanf("%d",&n);

  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  
 
    for ( i = 0; i < n; i++)
    {
         int count=0;
         for ( j = 1; j <= arr[i] ; j++)
         {
            if (arr[i]%j==0)
            {
                count++;
        
            }
            
         }
         if (count==2)
         {
            printf("Yes\n");
         }
         else
         {
            printf("No\n");

         }
         
         
        
    }
    
  
 
    return 0;
}