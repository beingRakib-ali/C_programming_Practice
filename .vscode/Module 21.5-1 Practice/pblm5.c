#include<stdio.h>


float calculate(char op, int x, int y);

int main()
{
  int x,y;
  char op;

  scanf("%c",&op);
  scanf("%d %d",&x,&y);

  float ans = calculate(op,x,y);
  printf("%.2f",ans);


    return 0;
}

float calculate(char op, int x, int y)
{
    
    if (op == '*')
    {
        return x*y;
    }

    else if (op == '+')
    {
        return x+y;
    }

    else if (op == '-')
    {
        return x-y;
    }
     
     else if (op == '/')
     {
        return x/y;
     }
     else
     {
        return 0;
     }
     
    
    
    


}