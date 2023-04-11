#include<stdio.h>

int main()
{
  
  int mat1[3][3],mat2[3][3],ans[3][3];

  int i,j,k;
  int result[3][3];

printf("Frist Matrix: \n");
  for ( i = 0; i <3; i++)
     for ( j = 0; j < 3; j++)
      scanf("%d",&mat1[i][j]);

printf("Second Matrix: \n");
  for ( i = 0; i <3; i++)
     for ( j = 0; j <3; j++)
      scanf("%d",&mat2[i][j]);
      
  
  for ( i = 0; i <3; i++)
  {
     for ( j = 0; j <3; j++)
      {

        result[i][j]=0;

       for ( k = 0; k <3; k++)
       {

         result[i][j] += mat1[i][k]*mat2[k][j];
         
         ans[i][j] = result[i][j];
       }
       
      }
      printf("\n");
  }

 printf("Matrix Multiplication is: \n");
  
  for ( i = 0; i <3; i++)
  {
     for ( j = 0; j <3; j++)
     
     {

       printf("%d ",ans[i][j]);

     }

      printf("\n");
  }
    return 0;
}