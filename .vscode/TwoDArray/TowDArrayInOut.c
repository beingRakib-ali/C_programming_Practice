#include<stdio.h>
int main()
{

  int i,j;

   int row,col; 
   
   scanf("%d %d",&row,&col);
   int arr[row][col];

  for ( i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
        scanf("%d",&arr[i][j]);
    }

    
  }
  printf("\n");

  for ( i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    
  }


    return 0;
}