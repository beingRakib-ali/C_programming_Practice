 
#include<stdio.h>

int main()
{
    int num,mod;
    
    printf("Enter a number\n");
    scanf("%d",&num);
    int sum = 0;
  while(num>0)
    {
          mod = num % 10;  
          sum = sum+mod;
          num = num / 10;   
       
    }
     printf("%d\n",sum);
    return 0;
}