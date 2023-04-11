

#include <stdio.h>
int getPrime(int x)
{
    if(x==1)
    return 0;
    else if(x==2)
    return 1;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int a,i,ans;
    scanf("%d",&a);
    
    ans = getPrime(a);
    if(ans==1)
    {
    printf(" %d is a prime number.",a);
    }
    if(ans==0)
    {
    printf("%d is a composite number.",a);
}
    return 0;
}
