#include<stdio.h>
int main()
{

    int radius;
    printf("Enter the number of Radius: ");
    scanf("%d",&radius);

    float area;
    area = 3.14159*radius*radius;
    printf("Area Of circle is: %f ",area);

    return 0;
}
