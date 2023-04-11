#include<stdio.h>
int main()
{
    int i;
    int a[10] ;
    int maxx;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 1; i < 10; i++)
    {
        maxx = a[0]; 
        if (a[i]>maxx)    //for find min (a[i]<min) min = a[i];
        {
            maxx = a[i];       
        }
        
    }
    printf("%d ",maxx);
   
    return 0;
}

// 10 20 30 40 50 60 70 80 90 110