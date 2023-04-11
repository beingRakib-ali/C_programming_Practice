#include<stdio.h>
#include<string.h>
int main()
{
    int i;
   char s[102];
   char t[102];

   fgets(s,sizeof(s),stdin);
   fgets(t,sizeof(t),stdin);
    
   

  
    for ( i = 0; s!='\0' || t!='\0'; i++)
    {
        if (s[i]>t[i])
        {
            printf("%s is hexicograficall smaller than %s",t,s);
            return 0;
        }
        if (s[i]<t[i])
        {
            printf("%s is hexicographycally smaller than %s",s,t);
           
        return 0;
      }
    }
    return 0;
}