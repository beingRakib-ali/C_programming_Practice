#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char name[25];
    int n,i,j,l;
    int flag;
    scanf("%d\n",&n);
   
    for(i=0;i<n;i++)
    {
      fgets(name,sizeof(name),stdin);
       l=strlen(name)-1;
       flag = 0;
        for ( j = 0; j < l; j++)
        {
           if(name[j]!=name[l-j-1])
        {
             flag=1;
           //  break;

        }
        
               
        }
            if (flag=0)
            {
               if(l>=7)
                {
                   printf("%c%d%c\n",name[0],l-2,name[l-1]);
                }
               else
                {
                    
                printf("%s",name);
                }
            }
            
           
             else
                {
                    printf("Not Palindrome\n");
                }
            
    }
   
    return 0;
}
