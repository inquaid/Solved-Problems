#include <stdio.h>
#include <string.h>

void check();
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
}

void check()
{
    int a, b, c, d, e;
    scanf("%d", &d);
    a = d / 3;
    b = d / 3;
    c = d / 3;
    e = a + b + c;
    for (int i = 0;; i++)
    {
        if (b > a && a > c && c > 0 && (a + b + c) == d)
        {
            printf("%d %d %d\n", a, b, c);
            break;
        }

        b++;
        c--;

        if (b > a && a > c && c > 0 && (a + b + c) == d)
        {
            printf("%d %d %d\n", a, b, c);
            break;
        }

        b++;
        if (b > a && a > c && c > 0 && (a + b + c) == d)
        {
            printf("%d %d %d\n", a, b, c);
            break;
        }

        a++;
        if (b > a && a > c && c > 0 && (a + b + c) == d)
        {
            printf("%d %d %d\n", a, b, c);
            break;
        }
    }
}