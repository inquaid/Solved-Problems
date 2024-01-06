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
    int a, b, n, i = 0, sum;
    scanf("%d%d%d", &a, &b, &n);
    for (i = 1;; i++)
    {
        if (a < b)
        {
            a += b;
        }
        else
        {
            b += a;
        }

        if (a > n || b > n)
            break;
    }

    printf("%d\n", i);
}