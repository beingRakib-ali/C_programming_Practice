#include<stdio.h>

int main()
{

    int w;
    printf("Enter The weight w: ");
    scanf("%d",&w);

    if(w%4==0)
    {

        printf("Possible");
    }

    else
    {
        printf("Not Possible");
    }

    return 0;
}
