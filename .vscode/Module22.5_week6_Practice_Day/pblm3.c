#include<stdio.h>
#include<string.h>
void concatenation(int x, char name[]);
int main()
{ 
  
  int n;
  
  scanf("%d",&n);
  char name[1000];
  
  for (int i = 0; i < n; i++)
  {
     char word[100];
     scanf(" %s",word);
     if (i==0)
     {
        strcpy(name,word);
        strcat(name, " ");
     }
     else
     {
        strcat(name,word);
        strcat(name, " ");
     }
     
     
  }
    printf("%s",name);
  
 

    return 0;
}

