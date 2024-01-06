#include <stdio.h>
void repeat(void);

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{

    long long int a, b, c, temp, i, sum = 0, j = 0;
    scanf("%lld%lld%lld", &a, &b, &c);

    i = 0;

    while (c--)
    {
        scanf("%lld", &temp);
        b = (temp < a) ? b + temp : b + a - 1;
    }

    printf("%lld\n", b);
}