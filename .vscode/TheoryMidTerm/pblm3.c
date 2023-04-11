#include <stdio.h>
int main() {
    
int n=15;
int a[15];
int x =1;
for (int i=0; i<=n; i++) {
    a[i] = x;
    x= x*2;
    
	printf("%d ",a[i]);
	
} 
    return 0;
}