#include<stdio.h>

int main()
{

    printf("Enter the number x:\n");
;


   int x,y;

   scanf("%d",&x);
       printf("Enter The Number of y:\n");
        scanf("%d",&y);

   if(x>y)
   {

       printf("x = %d is greater than y = %d",x,y);
   }

    else if(x<y)
    {

           printf("y = %d is greater than x = %d",y,x);
    }


    else
    {

           printf("x = %d Both Are Equal y = %d",x,y);
    }

   return 0;
}
