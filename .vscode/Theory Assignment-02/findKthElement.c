#include <stdio.h>

int main()
{

    int n, k;
    
    scanf("%d %d", &n, &k);
    int arr[n+1];
    int even =(n/2);
    int odd = (n/2)+(n%2);
    int e=2;
    for (int i = 1; i <= even; i++)
    {
        arr[i]=e;
        e+=2;
    }

    int o =1;
    for (int i = even+1; i <=even+odd; i++)
    {
        arr[i]=o;
        o +=2;
       
    }
  
    for (int i =1; i <= n; i++)
    {
         printf("%d ",arr[i]);
         
    }
     
     printf("\nThe %dth element in this sequence is %d.",k,arr[k]);
    
    
    

    return 0;
}