#include<stdio.h>

int main()
{
   long long int n,x;
   long long int arr[200001];
   int i;
   scanf("%lld\n",&n);
   for ( i = 1; i < n; i++)
   {
    scanf("%lld",&x);
    arr[x]=1;
   }

   for ( i = 1; i < n; i++)
   { 

    if (arr[i]==0)
    {
    
        printf("%lld\n",i);
      
        break;
    }
    
   }
   



    return 0;
}