#include <stdio.h>

void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}

void repeat()
{
    int a, max = 0, count;
    scanf("%d", &a);
    int ary[a][2];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (ary[i][0] <= 10 && ary[i][1] > max)
        {
            max = ary[i][1];
            count = i;
        }
        // printf("%d ",ary[i][1]);

        // printf("%d ",ary[i][0]);
    }

    printf("%d\n", count + 1);
}