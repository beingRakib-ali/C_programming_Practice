#include<stdio.h>

int main()
{
   char sen[1000];

fgets(sen,sizeof(sen),stdin);


    int i=0,counter=0,con=0;
    while (sen[i]!='\0')
    {
        if (sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u' || sen[i]=='A' || sen[i]=='E' || sen[i]=='I' || sen[i]=='O' || sen[i]=='U')
        {
            counter ++ ;
        }
        else
        {
            con++;
        }
        
        i++;
    }
    
     printf("Vowel is: %d\nConstant is: %d\n",counter,con);


    return 0;
}