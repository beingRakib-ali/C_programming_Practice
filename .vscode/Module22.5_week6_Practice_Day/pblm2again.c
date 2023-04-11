#include<stdio.h>

void pattern(int x);
int is_prime(int x);

int main()
{
  int n;
   scanf("%d",&n);
  pattern(n);


    return 0;
}



int is_prime(int x)
{
  int i;
  for ( i = 2; i < x; i++)
  {
    if (x%i==0)
    {
        return 0;
    }
    
  }
  return 1;
  

}


void pattern(int x)
{

    int i,j,k=2;
    for ( i = 1; i <= x; i++)
    {
        for ( j = 1; j <= i; j++)
        {
              while (!is_prime(k))
              {
                k++;
              }
              printf("%d ",k);
              k++;
        }
        printf("\n");
    }
    
}