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
     int ans=1,x=arr[0][0];
      for ( i = 0; i < row; i++)
          {
            for ( j = 0; j < col; j++)
            {
                if(i==j)
                {
                    if (arr[i][j] != x)
                    {
                        ans=0;
                    }
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
              printf("Scaler\n");
          }
          else{
              printf("Not Scaler\n");
          }
 }
 
  else{
     printf("Not Scaler\n");
     }


    return 0;
}