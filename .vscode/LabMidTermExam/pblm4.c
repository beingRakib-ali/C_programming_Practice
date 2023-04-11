#include <stdio.h>
#include <string.h>
int main() 
{
    int T,N,i,j;
   
    

    scanf("%d",&T);

    for (i=0; i<T; i++)
    {
        int count =0;
        scanf("%d",&N);

       char S[N]; 
       scanf(" %s",S);
        
         for(j=1; j<N; j++)
        {
            if(S[j]=='1' && S[j-1]=='0')
            {
                count++;
            }
             if(S[j]=='0' && S[j-1]=='1')
            {
                count++;
            }
        }
        
        

        printf("%d\n",count);
    }

    return 0;
}