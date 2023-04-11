#include<stdio.h>

int main()
{
   int n,i,k;
   int scores[55];
   int ans = 0;

   scanf("%d %d",&n,&k);

   for ( i = 1; i <= n; i++)
   {
      scanf("%d",&scores[i]);
   }

   for ( i = 1; i <=n; i++)
   {
     if (scores[i]>=scores[k] &&  scores[i]>0)
     {
        ans++;
     }

     
   }
    printf("%d\n",ans);
   
   

    return 0;
}