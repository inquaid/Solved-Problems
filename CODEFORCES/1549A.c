#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    while (n--)
    {
        long long int a;
        scanf("%lld", &a);
        printf("2 %d\n", a - 1);
    }
}