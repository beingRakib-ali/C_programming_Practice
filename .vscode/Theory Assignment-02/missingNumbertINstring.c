#include <stdio.h>
#include <string.h>

int missing_one(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {

        if (name[i] == '1')
        {
              return 1;
        }
    }
}

int missing_seven(char name[])
{
    int i;

    for (i = 0; name[i] != '\0'; i++)
    {

        if (name[i] == '7')
        {
            return 1;
        }
    }
}

int missing_nine(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {

        if (name[i] == '9')
        {
            return 1;
        }
    }
}
int main()
{

    char name[1000];

    scanf("%s", &name);

    if (missing_one(name) == 1 && missing_seven(name) == 1 && missing_nine(name) == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
