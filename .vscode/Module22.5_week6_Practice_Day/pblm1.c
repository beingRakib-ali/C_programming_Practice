#include<stdio.h>
#include<string.h>
 
 int is_binary( char str[])
 {
     int i;
     int  l = strlen(str)-1;
    for ( i = 0; i < l; i++)
    {
        if (str[i]!='0' && str[i]!='1')
        {
            return 0;
        }
     
        
    }

    return 1;
    
 }
int main()
{
 char name[100];
 fgets(name,sizeof(name),stdin);
    
 if (is_binary(name)==1)
 {
    printf("Yes\n");
 }
 else
 {
    printf("No\n");
 }
 
 


    return 0;
}