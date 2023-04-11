#include<stdio.h>

int main()
{
  
  int n;
  int a = 5;

  int b = 22;
  int c;

   c = a&b;
   int d = a|b;
   int e = ~a;
  printf("%d \n",c);  /*
      
      5 = 101 22 = 10110
      10110
      00101
    &  00100
  
  */ 


  printf("%d \n",d);
  /*
      
      5 = 101 22 = 10110
      10110
      00101
   |  10111
  
  */ 
  printf("%d ",e);
  
  /*
      
      5 = 101 22 = 10110
      10110
      00101
   ~  11011  1's complement         = -a   
         +1      2's complement    

         ~a+1 = -a
         ~a = -a-1
         ~a = -(a+1) this is law of 1's complement

         a = 5
         ~a = -(5+1)
         ~a = -6
  */ 



    return 0;
}