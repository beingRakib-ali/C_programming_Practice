#include<stdio.h>

int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>=0 && n<=32)
    {

        printf("F");
    }
    else if(n>=33 && n<=39)
    {
        printf("D");
    }

     else if(n>=40 && n<=49)
    {
        printf("c");
    }
     else if(n>=50 && n<=59)
    {
        printf("B");
    }
     else if(n>=60 && n<=69)
    {
        printf("A-");
    }
     else if(n>=70 && n<=79)
    {
        printf("A");
    }
     else if(n>=80 && n<=100)
    {
        printf("A+");
    }

    return 0;
}
