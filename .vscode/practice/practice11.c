#include<stdio.h>

int main()
{

    int x,a,b,s,d;

    printf("Enter the number of\n x =\n a =\n b =\n");
    scanf("%d %d %d",&x,&a,&b);

    if(x%2==0)
    {
        s = a+b;
        printf("sum is: %d ",s);
    }
    else
    {

        d = a-b;
        printf("Diffrent is %d",d);
    }



    return 0;
}
