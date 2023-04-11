#include<stdio.h>

int main()
{

    int a,b,c;
    printf("Enter The Number of a: ");
    scanf("%d",&a);


    printf("Enter The Number of b: ");
    scanf("%d",&b);


    printf("Enter The Number of c: ");
    scanf("%d",&c);

    if(a>b & a>c)
    {
        printf("a = %d is largest",a);
    }

    else if(b>a & b>c)
    {
        printf("b = %d is largest",b);
    }
    else
    {
        printf("c = %d is largest",c);
    }


    return 0;
}
