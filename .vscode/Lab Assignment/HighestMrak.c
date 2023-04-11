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

  int max=arr[0];

  for ( i = 0; i < n; i++)
  {
    if (arr[i]>max)

    {

        max=arr[i];
        
    }
   
  
  }
  

   int dif;
   for ( i = 0; i < n; i++)
   {
     dif=  max-arr[i];
     printf("%d\t",dif);
   }
   




    return 0;
}