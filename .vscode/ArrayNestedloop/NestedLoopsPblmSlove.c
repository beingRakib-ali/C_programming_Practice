#include<stdio.h>

int main()
{  
    int i,j;
    float sum,avg,x;

    for ( i = 1; i <= 10; i++)
    {
        sum = 0.0;
        printf("Enter The Number of %dth Students:\n ",i);
        for ( j = 1; j <= 3; j++)
        {
            scanf("%f",&x);
            sum += x;
        }

        avg= sum/3;
        printf("The Agerage Number is: %f\n",avg);
        
    }
    


    return 0;
}