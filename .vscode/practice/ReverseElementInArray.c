#include<stdio.h>


int main()
{
  int array[100];
  int i,size;
  printf("Enter the Size Of Array: ");
  scanf("%d",&size);
printf("Enter Element: ");

for ( i = 0; i < size; i++)
{
    scanf("%d",&array[i]);
}
printf("Reverse element: ");
for ( i = size-1; i >= 0; i--)
{
    printf("%d ",array[i]);
}





    return 0;
}