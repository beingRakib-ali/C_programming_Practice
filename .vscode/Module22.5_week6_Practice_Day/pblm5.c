#include<stdio.h>
void  getMatrixElements(int matrix[][10],int row,int column)
{
    int i,j;
    for ( i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
}

void multiplyMatrices(int frist[][10],int second[][10],int result[][10],int r1,int c1,int r2,int c2)
{
    int i,j,k;
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            result[i][j]=0;
        }
    }

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {

            for ( k = 0; k <c1; k++)
            {
                result[i][j] +=frist[i][k] * second[k][j];
            }
            
        }
        
    }
}

 void display(int result[][10],int row,int column)
 {
    int i,j;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
             printf("%d ", result[i][j]);
              if (j == column - 1)
            printf("\n");
        }
        
        
    }
    
 }

int main()
{
   int r1,c1,r2,c2,frist[10][10],result[10][10],second[10][10];
   printf("first matrix row & col number: ");
   scanf("%d %d",&r1,&c1);
   printf("second matrix row & col number: ");
   scanf("%d %d",&r2,&c2);

   while (c1 != r2)
   {
      printf("Error Enter row and column again\n");
      printf("first matrix row & col number: \n");
    scanf("%d%d",&r1,&c1);
    printf("second matrix row & col number: \n");
    scanf("%d%d",&r2,&c2);
   }
   

    getMatrixElements(frist,r1,c1);
    getMatrixElements(second,r2,c2);
   multiplyMatrices(frist,second,result,r1,c1,r2,c2);
   display(result,r1,c2);


    return 0;
}