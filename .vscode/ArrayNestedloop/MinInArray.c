#include<stdio.h>

int main()
{
  int n=6;
  int arr[n];
  int i;


  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }

  int Min=arr[0];

  for ( i = 0; i < n; i++)
  {
    if (arr[i]<Min)

    {
        //find 2nd minimum value

        Min=arr[i];
        
    }
   
  
  }
  
   printf("The 2nd Minimum value is %d",Min+1);







    return 0;
}