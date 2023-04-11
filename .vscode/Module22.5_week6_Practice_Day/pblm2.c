#include<stdio.h>
 
int is_prime(int n)
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

void pattern(int x)
{
    int i,j,k=2;

   for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
        {
            while (!is_prime(k))
            {
                k++;
            }
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    
}





int main()
{
  int n;
  scanf("%d",&n);

  pattern(n);
  
 // is_Prime(n);

    return 0;
}