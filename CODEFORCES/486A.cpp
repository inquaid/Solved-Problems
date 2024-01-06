#include <stdio.h>
#include <math.h>
long long int main()
{
    long long int a, b, c, d, e;
    scanf("%lld", &a);

    d = (a / 2) * (a / 2 + 1);
    e = ((a + 1) / 2) * ((a + 1) / 2);
    long long int f = d - e;

    printf("%lld", f);

    return 0;
}