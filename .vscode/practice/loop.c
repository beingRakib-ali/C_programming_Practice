#include<stdio.h>

int main()
{

  int i,n=5,a[5];
 int sum;
  for ( i = 0; i < n; i++)
  {
   scanf("%d",&a[i]);
  }

  printf("\n");
  sum = 0;
  for ( i = 0; i < n; i++)
  {
    sum += a[i]%10;
  }
  printf("Sum is : %d\n",sum);
  









    return 0;
}