#include<stdio.h>

int take_radius()
{
    int r;
    printf("Enter The Radious Value:\n");

    scanf("%d",&r);
    return r;
}

calculate_radius(int r)
{
    return 3.1416*r*r;
}

int main()
{
   int r;
   r = take_radius();

   float ans;

   ans = calculate_radius(r);

   printf("The Area Of circle Is: %.2f",ans);



    return 0;
}