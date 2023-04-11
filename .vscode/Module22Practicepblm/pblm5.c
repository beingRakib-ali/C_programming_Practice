#include<stdio.h>

 int gcd(int m,int n)
 {
    int i;
    for ( i = m; i >=1; i--)
    {
        if (m%i==0 && n%i==0)
        {
            return i;
        }
        
    }
    
    
 }

  int lcm(int m, int n)
  {
    int i;
    for ( i = n;i<(m*n); i++)      //lcm m*n ar besi hbe na loop e condition na dileo pblm nei(i=m;;i++) ...i=m or i=n or i =m*n (i-- krte hbe) theke start korleo hbe. 
    {
        if (i%m==0 && i%n==0)
        {
            return i;
        }
        
    }
    
  }
  int lcm2(int m,int n) // 2nd formula of find the lcm
  {
   
    return (m*n)/gcd(m,n);
    
  }
int main()
{
 
  int a,b;
  scanf("%d %d",&a,&b);

  int ans = gcd(a,b);
  int ans2 = lcm(a,b);
  int ans3 = lcm2(a,b);
  
  printf("GCD is %d\n",ans);
  printf("LCM is %d\n",ans2);
  printf("LCM is %d\n",ans3);


    return 0;
}