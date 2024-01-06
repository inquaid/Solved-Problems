#include <stdio.h>
#include <math.h>
void check()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    long long int c = abs(b - a);
    long long int d = b, e = a;
    a = (a > b) ? a : d;
    b = (a > b) ? b : e;
    // printf("%lld %lld\n",a,b);

    long long int z = (c % 10 == 0) ? c / 10 : c / 10 + 1;
    printf("%lld\n", z);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    for (long long int i = 0; i < n; i++)
    {
        check();
    }
}