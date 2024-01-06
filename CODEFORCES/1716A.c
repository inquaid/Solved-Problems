#include <stdio.h>
#include <math.h>
long long int check(long long int a)
{

    scanf("%lld", &a);
    if (a == 1)
        printf("2\n");
    else if (a % 3 == 0)
        printf("%lld\n", a / 3);
    else
    {
        long long int b = a / 3;
        long long int c = a % 3;
        printf("%lld\n", b + 1);
    }
}
int main()
{
    long long int t, a;
    scanf("%lld", &t);

    if (t >= 1 && t <= pow(10, 4))
    {

        for (long long int i = 1; i <= t; i++)
        {
            check(a);
        }
    }
}