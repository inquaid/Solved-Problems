#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c = 0, d = 0;

    for (int i = 1; i <= n; i++)
    {

        scanf("%d %d", &a, &b);
        if (a > b && a <= 6 && b <= 6)
        {
            c = c + 1;
        }
        else if (b > a && b <= 6 && a <= 6)
        {
            d = d + 1;
        }
    }
    if (c > d)
    {
        printf("Mishka");
    }
    else if (d > c)
        printf("Chris");
    else if (c == d)
    {
        printf("Friendship is magic!^^");
    }

    return 0;
}