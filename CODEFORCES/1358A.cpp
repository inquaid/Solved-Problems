#include <stdio.h>
int main()
{
    int T, a, b;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &a, &b);
        a *= b;
        if (!(a & 1))
        {
            printf("%d\n", a / 2);
        }
        else
            printf("%d\n", (a / 2) + 1);
    }
}