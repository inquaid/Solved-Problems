#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int check(int ary[][2], int size, int s);

int main()
{
    int s, n;
    scanf("%d%d", &s, &n);
    int ary[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }

    qsort(ary, n, sizeof(ary[0]), compare);

    if (check(ary, n, s))
    {
        printf("YES");
    }
    else
        printf("NO");
}

int check(int ary[][2], int size, int s)
{
    int x, y;
    for (int i = 0; i < size; i++)
    {

        if (ary[i][0] < s)
        {
            s += ary[i][1];
        }

        else
            return 0;
    }
    return 1;
}