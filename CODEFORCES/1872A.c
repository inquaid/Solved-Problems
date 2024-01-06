#include <stdio.h>
#include <stdlib.h>
void check(int a, int b, int c)
{
    int d = abs(a - b);
    int e = d / 2;
    if (a == b)
        printf("0\n");
    else if (c > a && c > b)
        printf("1\n");
    else if (d % 2 == 0 && e % c == 0)
        printf("%d\n", e / c);
    else if (d % 2 == 0 && e % c != 0)
        printf("%d\n", e / c + 1);
    else if (d % 2 != 0 && e % c == 0)
        printf("%d\n", e / c + 1);
    else if (d % 2 != 0 && e % c != 0)
        printf("%d\n", e / c + 1);
}
int main()
{
    int a, b, c;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        check(a, b, c);
    }

    return 0;
}