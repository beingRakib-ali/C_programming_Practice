#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int divide;
    int x=3;
    scanf("%d",&n);
    
    
    if(n%3==0)
    {
        divide = n/x;
        printf("%d",divide);
    }
    else{
        printf("-1");
    }
    
    return 0;
}