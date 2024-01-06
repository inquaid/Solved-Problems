#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int minus = 0;
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (int i = 0; i < b; i++)
    {
        if (ary[i] == 0)
            minus++;
    }
    int sum = 0;
    int c = b - 1;
    for (int i = c + 1; i <= a; i++)
    {
        if (ary[i] == 0)
            continue;
        if (ary[c] == ary[i])
            sum++;
    }
    if (ary[0] == 0)
    {
        b = 0, minus = 0;
    }

    if (ary[0] != 0 && ary[1] == 0)
    {
        b = 1, minus = 0;
    }

    printf("%d\n", b + sum - minus);
    // printf("%d\n", b );
    // printf("%d\n",  sum );
    // printf("%d\n",minus);

    return 0;
}