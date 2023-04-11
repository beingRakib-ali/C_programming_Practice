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


 if(row==col)
 {
     int ans=1;
      for ( i = 0; i < row; i++)
          {
            for ( j = 0; j < col; j++)
            {
                if(i==j)
                {
                    continue;
                }
                if (arr[i][j] != 0)
                    {
                        ans=0;
                    }
            }
           
            
          }
          if(ans==1)
          {
              printf("Diagonal\n");
          }
          else{
              printf("Not Diagonal\n");
          }
 }
 
 else{
     printf("Not Diagonal\n");
     }


    return 0;
}