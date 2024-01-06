#include <stdio.h>
void repeat()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0)
        printf("1\n");
    else
    {
        int e = (a) + 2 * b;
        printf("%d\n", e + 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}