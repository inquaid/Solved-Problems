#include <stdio.h>
#include <math.h>

long long int main()
{
    long long int m, n, a, b, c, d, e, f;
    scanf("%lld%lld%lld", &m, &n, &a);

    if ((m % a) == 0)
    {
        c = m / a;
    }
    else if ((m % a) != 0)
    {
        c = m / a + 1;
    }

    if ((n % a) == 0)
    {
        d = n / a;
    }
    else if ((n % a) != 0)
    {
        d = n / a + 1;
    }

    printf("%lld", c * d);

    return 0;
}