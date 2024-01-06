#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int a;
        scanf("%lld", &a);
        (a % 4 == 0) ? printf("YES\n") : printf("NO\n");
    }
}