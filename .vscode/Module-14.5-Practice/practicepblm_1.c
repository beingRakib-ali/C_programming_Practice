#include<stdio.h>
#include<string.h>

int main()
{
    int m,i;
    char s[100],s2[100],s3[100];
    scanf("%d",&m);
    

    for ( i = 0; i <=3; i++)
    {
        fgets(s,sizeof(s),stdin);
        fgets(s2,sizeof(s2),stdin);
        fgets(s3,sizeof(s3),stdin);
     
    }
       printf("%s %s %s",s,s2,s3);




    return 0;
}