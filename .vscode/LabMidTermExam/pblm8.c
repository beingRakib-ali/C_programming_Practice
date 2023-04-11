#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);


    char str[n];
    scanf("%s", str);

    int count=1;
    int arr[n];
    int index = 0;
    for(int i=1; i<n; i++)
    {
        if(str[i-1] == str[i])
        {
            count++;
        }
        else
        {
            arr[index] = count;
            index++;
            count=1;
        }
    }

    arr[index] = count;
    index++;

    int maxx = -1;
    for(int i=0; i<index; i++)
    {
        if(arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }

    printf("%d\n", maxx);

    return 0;
}