#include<stdio.h>
int main()
{

    int a,b;
    printf("Enter the number:\n");
    scanf("%d%d",&a,&b);

    printf("The Number Of a is: %d\n",a);
    printf("The Number Of b is: %d\n",b);

    int sum;
    //scanf("%d",&sum);
    sum = a+b;
    printf("Sum Of two number is: %d\n",sum);

    int d ;
    d = a-b;
    printf("Different of two number is: %d",d);

    return 0;
}
