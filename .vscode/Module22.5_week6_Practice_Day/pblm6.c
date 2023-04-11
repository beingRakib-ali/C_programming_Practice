#include <stdio.h>
int main()
{

    int i, j, counter;

    int m[9][9];

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            m[i][j] = 0;
        }
    }

    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        m[x][y] = 1;
         }

    for (i = 1; i <= 8; i++)
    {
        counter = 0;
        for (j = 1; j <= 8; j++)
        {
            if (m[i][j] == 1)
            {
                counter++;
            }
        }
        if (counter > 1)
        {
            for (j = 1; j <= 8; j++)
            {
                m[i][j] = 0;
            }
        }
    }

    for (i = 1; i <= 8; i++)
    {
        counter = 0;
        for (j = 1; j <= 8; j++)
        {
            if (m[j][i] == 1)
            {
                counter++;
            }
        }
        if (counter > 1)
        {
            for (j = 1; j <= 8; i++)
            {
                m[j][i] = 0;
            }
        }
    }
    printf("\n");

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (m[i][j] == 1)
            {

                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}