

#include <stdio.h>
#include <math.h>
 float f(int x, int y);
 float absulate(int x);
 
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float ans;
    
    ans = f(x,y);
    printf("%f\n",ans);

    return 0;
}

 float f(int x, int y)
 {
     
     int tempans = absulate(x-3) + (y+4)*(y+4);
     
     return sqrt(tempans);
     
     
 }
 
 float absulate(int x)
 {
     if(x>=0)
     return x;
     else
     return (-1)*x;
 }
 