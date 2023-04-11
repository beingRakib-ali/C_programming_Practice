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
        if (l>10)
            {
                printf("%c%d%c\n",name[0],l-2,name[l-1]);
                
            }
        else
            {
                puts(name);
            }


   }
   
   

   

    return 0;
}