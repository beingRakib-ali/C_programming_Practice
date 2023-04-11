

#include <stdio.h>
  int getSum(int x,int y)
  {
      return x+y;
  }
  
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    
    int ans = getSum(a,b);
    
    printf("%d\n",ans);
    
    
    return 0;
}
