#include<stdio.h>
#include<string.h>
int main()
{
  
 int a,b,ans=0;

 char S[20];
 fgets(S,sizeof(S),stdin);
 int len = strlen(S)-1;
 

 scanf("%d %d",&a,&b);
  
for(int i=0;i<len;i++)
{  
if (S[i]=='+')
{
    ans += a+b;
   
}
else if (S[i]=='*')
{
    ans += a * b;
   
}


}

 printf("%d",ans);




    return 0;
}