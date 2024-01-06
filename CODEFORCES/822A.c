#include <stdio.h>
#include <math.h>

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int main()
{
    // int p;
    // scanf("%d",&p);
    // while(p--) {

    int a, b;
    scanf("%d%d", &a, &b);
    int n = min(a, b), result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("%d", result);
    // }
}