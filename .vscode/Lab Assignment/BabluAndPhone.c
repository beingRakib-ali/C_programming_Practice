#include<stdio.h>

int main()
{
   int n,i;
    char c;
   int arr[105];
   int min = 0;
   scanf("%d",&n);
  
   for ( i = 0; i <n; i++)
   {
      scanf("%d %c",&arr[i],&c);
   }
   for ( i = 0; i < n; i++)
   {
      if (arr[i]>=0 && arr[i]<60)
      {
      min = ((60-arr[i])+(2*20)+(3*20));
      }
      else if (arr[i]>=60 && arr[i]<=80)
      {
        min = ((80-arr[i])*2+(3*20));
      }
      else if (arr[i]>=80 && arr[i]<=100)
      {
       min =  ((100-arr[i])*(3));
      }
       printf("%d Minutes\n",min);
   }
   



    return 0;
}