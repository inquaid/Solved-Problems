#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int a = n % 4;
    if (n == 0)
        printf("1");
    else if (a == 0)
        printf("6");
    else if (a == 1)
        printf("8");
    else if (a == 2)
        printf("4");
    else if (a == 3)
        printf("2");

    return 0;
}