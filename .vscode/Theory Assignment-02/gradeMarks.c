#include <stdio.h>

void gradeA(int n)
{
    char ch = 'A';
    if (n >= 80 && n <= 100)
    {
        printf("%c", ch);
    }
}

int gradeB(int n)
{
    char ch = 'B';
    if (n >= 60 && n <= 79)
    {
        printf("%c", ch);
    }
}

int gradeC(int n)
{
    char ch = 'C';
    if (n >= 40 && n <= 59)
    {
        printf("%c", ch);
    }
}

int gradeF(int n)
{
    char ch = 'F';
    if (n >= 0 && n <= 39)
    {
        printf("%c", ch);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    gradeA(n);

    gradeB(n);

    gradeC(n);

    gradeF(n);

    return 0;
}