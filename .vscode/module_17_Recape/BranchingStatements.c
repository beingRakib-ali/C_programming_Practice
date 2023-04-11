#include<stdio.h>

int main()
{
  
 int a,b,ans;
 scanf("%d %d",&a,&b);

 char c;
 getchar();
  c = getchar();
if (c=='+')
{
    ans = a+b;
    printf("ans = %d",ans);
}
else if (c == '-')
{
    ans = a - b;
    printf("ans = %d",ans);
}
else
{
    printf("Invalide number");
}








    return 0;
}