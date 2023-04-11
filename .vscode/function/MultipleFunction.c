#include<stdio.h>

int shat_psnt(n);
int dgsum(n);
int ld_prime(n);

int main()
{
  int n;
  scanf("%d",&n);

  if (shat_psnt(n)==1 && dgsum(n)>10 && ld_prime(n)==1)
  {
    printf("Rakib's number\n");

  }
  else
  {
    printf("No\n");
  }
  
    return 0;
}

int shat_psnt(n)
{
    while (n>0)
    {
        
        if (n%10 == 7)
        {
            return 1;
        }
        n/=10;
        
    }
    
}
int dgsum(n)
{
    int sum=0;
    while (n>0)
    {
        sum += n%10;
        n /=10;

    }
    return sum;
}

int ld_prime(n)
{
    int ld = n%10;

    if (ld%2 == 1)
    
        return 1;
    
    else
    return 0;
    
}