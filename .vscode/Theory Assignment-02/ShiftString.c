#include<stdio.h>
#include<string.h>


int main()
{
     char name[1000];
     
     scanf("%s",&name);

    int n;
    scanf("%d",&n);

    for (int i = 0; name[i] != '\0'; i++)
    {
        

         if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    
     for (int i = 0; name[i] != '\0'; i++)
    {
       char newCh;
       char results;
          
          results= name[i]+n;

         if (name[i]+n > 122)
        {
           newCh = (name[i]+n)-122;
            results = newCh+96;
           
        }
        printf("%c",results);
    }

    return 0;
}