#include <stdio.h>

int main()
{
   int N = 8, i, j,temp;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};

    for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

 for(j=0;j<N;j++)
 {
    for (i = 0; i < N-1; i++)
        {
            if (ara[i]>ara[i+1])
            {
                temp = ara[i+1];
                ara[i+1] = ara[i];   //swaping value
                ara[i]= temp;
            }
            
        }


  for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

 }

    return 0;
}