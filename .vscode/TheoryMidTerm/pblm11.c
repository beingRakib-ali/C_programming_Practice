#include<stdio.h>
int main()
{
  int row,col,i,j;

  scanf("%d %d",&row,&col);
  printf("\n");
  int a[row][col];
  for ( i = 0; i < row; i++)
  {
    for ( j = 0; j < col; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
  }
  printf("\n");


  int sumd1=0,sumd2=0,sumr=0,sumc=0,f=0;  
   for ( i = 0; i < row; i++)
   {
    for ( j = 0; j < col; j++)
    {
        if (i==j)
        {
            sumd1 = sumd1+a[i][j];
        }
        if (i+j == row-1 && i+j == col-1)
        {
            sumd2 = sumd2+a[i][j];
        }
        
     }  
    }

    if (sumd1 != sumd2)
    {
       f = 1;
    }
    else
    {
        
        for ( i = 0; i < row; i++)
        {
            sumr=0;
            sumc=0;
            for ( j = 0; j < col; j++)
            {
              sumc = sumc+a[j][i];
              sumr = sumr+a[i][j];
            }
            if (sumr != sumd1)
            {
              f = 1;
            }
            else if (sumc != sumd1)
            {
                f = 1;
            }
            else{
                f = 0;
            }
            
            
    
         }
    }

    if (f==0)
    {
        printf("Matrix is Magic square Matrix");
    }
    else
    {
        printf("Matrix is Not Magic Square Matrix");
    }
    
    
   
   




    return 0;
}