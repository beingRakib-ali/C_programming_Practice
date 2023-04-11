#include<stdio.h>

void evenNum(int x);

int main()
{

    int n;
    scanf("%d",&n);

    evenNum(n);
    
   return 0;
}


void evenNum(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    
        
    }
    
}

