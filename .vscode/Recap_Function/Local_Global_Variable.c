#include<stdio.h>

 int g=7;

 void sum()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    int g =13;
    printf("%d\n",a+b);
    printf("printing in function %d\n",g);
    g++;
    printf("printing in sum function after increment g value %d\n",g);
    {
        extern int g;
        printf("Global variable print in sum function %d\n",g);
         g+=2;
    }
   
 }

int main()
{
   
   sum();
   printf("Printing in main function %d\n",g);

    return 0;
}