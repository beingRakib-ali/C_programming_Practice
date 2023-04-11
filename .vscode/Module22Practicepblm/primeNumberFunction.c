#include<stdio.h>

int is_Prime(int n)
{

   int i;
   for ( i = 2; i < n; i++)
   {
        if (n%i==0)
        {
            return 0;
        }
   }
   return 1;
    
    
}

int main()
{
  int n;
  scanf("%d",&n);

  if(is_Prime(n))   // return 1 thats means true (condition wrong) so return 1  ... so is_Prime(n)==1 or is_Prime(n) that is same
   printf("Prime Number\n");
  else
  {
    printf("Composite Number\n");
  }
  


    return 0;
}