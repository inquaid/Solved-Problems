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

    return 0;
}

void repeat()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
}