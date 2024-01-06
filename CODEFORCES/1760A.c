#include <stdio.h>
void check(int a, int b, int c)
{
    if (a < b && a > c)
        printf("%d\n", a);
    else if (a < c && a > b)
        printf("%d\n", a);

    else if (b > a && b < c)
        printf("%d\n", b);
    else if (b > c && b < a)
        printf("%d\n", b);

    else if (c > a && c < b)
        printf("%d\n", c);
    else if (c > b && c < a)
        printf("%d\n", c);
}
int main()
{
    int a, b, c;
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        check(a, b, c);
    }
}