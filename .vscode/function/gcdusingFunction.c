
#include <stdio.h>

int getGCD(int x, int y)
{
    for(int i=x; i>=1; i--)
    {
        if(x%i==0 && y%i==0)
        {
            return i;
        }
    }
}

int main()
{
    int a,b,i,ans;
    
    scanf("%d%d",&a,&b);
    
    ans = getGCD(a,b);
    
    printf("%d\n",ans);

    return 0;
}
