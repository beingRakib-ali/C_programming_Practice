#include<stdio.h>
int main()
{
    int i,j;
    int row,col;

    scanf("%d %d",&row,&col);

    int a[row][col];

  for (i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
        scanf("%d",&a[i][j]);
    }
  }

    if (row==col)
    {
        int flag = 1;
        for (i = 0; i < row; i++)
        {
            for ( j = 0; j < col; j++)
            {
                if ( (i+j)== (row-1) && (i+j)== (col-1) )
                {
                    if (a[i][j] != 1 )
                {
                   flag = 0;
                }     
                    continue;
                }

                if (a[i][j] != 0 )
                {
                   flag = 0;
                }     
                
            } 
                 
        }

        if (flag == 1)
            {
                printf("identity\n");
            }
            else
            {
                printf("Not identity\n");
            }
  
  }
  
    else
    {
        printf("Not identity\n");
    }
    




    return 0;
}