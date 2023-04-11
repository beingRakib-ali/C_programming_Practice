#include<stdio.h>


int main()
{
 int matrix[3][3];
 int matrix2[3][3];
  int i,j,m=3,n=3;

    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
            matrix2[i][j]=matrix[j][i];
        }
    }


        for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
            {
                printf("%d ",matrix2[i][j]); 
            }
            printf("\n");
        }

    return 0;
}