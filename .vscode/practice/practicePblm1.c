#include<stdio.h>



int main()
{

    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b || a>c)
    {
        if(a==b)
        {
             printf("a and b both are bigger");
        }

        else if(a==c)
            {
               printf("a and c both are bigger");
            }
    }

   else if(b>a || b>c)
    {
        if(b==a)
        {
             printf("b and a both are  bigger");
        }
       else if(b==c)
        {
        printf("b and c both are bigger");
       }
    }

    else if(c>a || c>b)

    {
        if(c==a)
        {
          printf("c and a both are bigger");
        }
        else if(c==b)
        {
            printf("c and b both are bigger");
        }
    }
    else
    {
        printf("They Are equal");
    }




    return 0;
}
