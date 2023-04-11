#include<stdio.h>

void pattern(int x);

int main()
{
 int n;
 scanf("%d",&n);

 pattern(n);



    return 0;
}


void pattern(int x)
{
    int i,j;
    for ( i = 1; i <= x; i++)
    {

        for(j=1; j<i; j++)
        {
            printf(" ");
        }


         for ( j = 1; j <= x*2-(2*i-1); j++)
            {
                printf("*");
            }
            printf("\n");
    }
    
   
    
}