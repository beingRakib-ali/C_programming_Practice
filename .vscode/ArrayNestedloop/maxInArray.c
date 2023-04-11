#include<stdio.h>

int main()
{
  int n=10;
  int arr[10];
  int i;


  for ( i = 0; i < 10; i++)
  {
    scanf("%d",&arr[i]);
  }

  int max=arr[0];

  for ( i = 0; i < 10; i++)
  {
    if (arr[i]>max)

    {

        max=arr[i];
        
    }
   
  
  }
  
   printf("The maximum value is %d",max);







    return 0;
}