#include<stdio.h>
#include<string.h>
int main()
{
   char name[1000];
   int i,l;
   int n;
   scanf("%d\n",&n);


      

   for ( i = 0; i <n; i++)
   { 
     fgets(name,sizeof(name),stdin);
      l = strlen(name)-1;
      if (name[i]==name[l-i-1])
      {
        if (l>=7)
            {
                printf("Case #2: %c%d%c\n",name[0],l-2,name[l-1]);
                
            }
        else
            {
                printf("Case #3: %s",name);
            }
      }
      
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
 
   }
    
    return 0;
}