#include <stdio.h>

int main()
{
    long long int a, m, n;
    long long int t;
    scanf("%lld", &a);
    scanf("%lld", &t);

    if (a % 2 == 0)
    {
        m = a / 2;
        n = m;
    }
    else
    {
        m = (a - 1) / 2;
        n = m + 1;
    }

    if (t <= n)
    {
        long long int q = 1 + (2 * (t - 1));
        printf("%lld", q);
    }
    else
    {
        long long int e = n;
        printf("%lld", 2 * (t - n));
    }
}