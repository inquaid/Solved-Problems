#include <stdio.h>

void check();

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    do
    {
        check();
        i++;
    } while (i < n);

    return 0;
}

void check()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    int i = 0;
    while (i < a)
    {
        scanf("%d", &ary[i]);
        i++;
    }
    int result;
    for (int k = 1; k < a; k++)
    {
        if (ary[0] != ary[1] && ary[1] == ary[2])
            result = 1;
        else if (ary[0] != ary[k])
            result = k + 1;
    }
    printf("%d\n", result);
}