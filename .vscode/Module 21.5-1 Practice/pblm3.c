#include<stdio.h>
int i;
int sumfun(int arr[],int n);

int main()
{


   int n;
  scanf("%d",&n);

   int arr[n];
   for ( i = 0; i < n; i++)
     
      {
        scanf("%d",&arr[i]);
      }
  
 
     int sum = sumfun(arr,n);
     printf("%d",sum);

    return 0;
}


int sumfun( int arr[],int n)
{
 int s = 0;
   for ( i = 0; i < n; i++)
   {
     s += arr[i]%10;
     s += arr[i]/1000;
     
   }
  
   return s;
}