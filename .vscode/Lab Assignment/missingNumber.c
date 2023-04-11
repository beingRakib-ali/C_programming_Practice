#include<stdio.h>

int main()
{
  int s,a,b,c;
 int ans;
  int k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++)
        
    {
        scanf("%d %d %d %d",&s,&a,&b,&c);
       ans = s - (a+b+c);
    }
  


    printf("%d\n",ans);
    return 0;
}