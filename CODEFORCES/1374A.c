#include <stdio.h>
int check(int x, int y, int n)
{
    scanf("%d%d%d", &x, &y, &n);

    // int p=n/x -1 ;
    int p;
    int s = (n - (x * (n / x)));
    if (s > y)
    {
        p = n / x;
    }
    else if (s < y)
    {
        p = (n / x) - 1;
    }

    if (n < x)
    {
        printf("%d", y);
    }

    else if (n % x == y)
    {
        printf("%d ", n);
    }
    else
    {
        int g = (p * x) + y;
        printf("%d ", g);
    }
}
int main()
{
    int x, y, n;
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        check(x, y, n);
        printf("\n");
    }

    return 0;
}