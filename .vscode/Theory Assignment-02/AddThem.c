#include<stdio.h>

int add_three_nums(int a, int b, int c)
{
 
	return a+b+c;
}

int main()
{
    int a,b,c,sum;
    scanf("%d %d",&a,&b);

    sum =  add_three_nums(a,b,0);
   
   printf("%d",sum);
  
    return 0;
}