#include <stdio.h>

void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    while (i < n)
    {
        repeat();
        i++;
    }
    return 0;
}

void repeat()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    a = 10 - a;
    int result = 0;
    for (int i = 0; i < a; i++)
    {
        result += 6 * i;
    }
    printf("%d\n", result);
}