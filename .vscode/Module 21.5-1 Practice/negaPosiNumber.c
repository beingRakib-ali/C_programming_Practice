/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

 void npNumber(int n);
 
int main()
{
   
    int x;
    scanf("%d",&x);
    
     npNumber(x);
    
   
    
   

    return 0;
}

 void npNumber(int x)
 {
    if(x>0)
  {
      for(int i =x; i>=-x; i--)
    {
      printf("%d ",i);
    }
 }
 
     else if(x<0)
     {
        for(int i=x; i<=-x; i++)
        {
            printf("%d ",i);
        }
     }
 }