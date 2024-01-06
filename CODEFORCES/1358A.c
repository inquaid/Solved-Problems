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
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a * b;
    (c % 2 == 0) ? printf("%d\n", c / 2) : printf("%d\n", c / 2 + 1);
}
