#include<stdio.h>

 int g;

 void sum()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    scanf("%d",&g);
    printf("%d\n",a+b);
    printf("printing in function %d\n",g);
    g++;
 }

int main()
{
   
    sum();
   printf("Printing in main function %d\n",g);

    return 0;
}