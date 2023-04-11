#include<stdio.h>
int main()
{  
    char name [] = "Ashik Ahmed";
    name[4] = 'q';
    name [11]= '\0';
    printf("%s",name);


    return 0;
}