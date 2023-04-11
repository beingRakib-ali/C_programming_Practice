#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a,b;
    scanf("%d%d",&a,&b);
    if(0 <= a <= 100 && 0 <= b <= 100 && a>b)
    {
        int d = a-b;
            printf("%d",d);
    }
    else
    {
      int  d = b-a;
         printf("%d",d);
    }
    return 0;
}
