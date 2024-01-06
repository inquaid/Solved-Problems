#include <stdio.h>
void check(long long int a)
{
    scanf("%lld", &a);
    if (a % 2 == 0)
        printf("%lld\n", (a / 2 - 1));
    else
    {
        long long int b = a + 1;
        printf("%lld\n", (b / 2 - 1));
    }
}

int main()
{
    long long int a, b;
    scanf("%lld", &a);
    for (long long int i = 0; i < a; i++)
    {
        check(b);
    }

    return 0;
}