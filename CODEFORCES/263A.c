#include <stdio.h>
int main()
{
    int ary[5][5];
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ary[i][j] == 1)
            {
                a = i + 1;
                b = j + 1;
            }
        }
    }
    int c, d;
    if (a >= 3)
    {
        c = a - 3;
    }
    else if (a < 3)
    {
        c = 3 - a;
    }
    if (b >= 3)
    {
        d = b - 3;
    }
    if (b < 3)
    {
        d = 3 - b;
    }

    printf("%d", c + d);

    return 0;
}