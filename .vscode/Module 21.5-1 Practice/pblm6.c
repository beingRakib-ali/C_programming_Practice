#include<stdio.h>
 
 void divisor(int x);

int main()
{
  
  int n;
  scanf("%d",&n);

  divisor(n);
 


    return 0;
}


void divisor(int x)
{

    int i;
    for ( i = 1; i <= x; i++)
    {
        if (x%i == 0)
        {
            printf("%d ",i);
        }
        
    }
    
}