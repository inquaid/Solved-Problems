#include <stdio.h>

void repeat(void);

int main()
{

    long int n;
    scanf("%ld", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{

    int x, y, z, a, b, c;
    scanf("%d%d%d", &x, &y, &z);
    if (x == y && x == z)
    {

        printf("YES\n%d %d %d\n", x, y, z);
    }

    else if (x == y && x > z)
    {

        printf("YES\n%d %d 1\n", x, z);
    }

    else if (y == z && y > x)
    {

        printf("YES\n1 %d %d\n", x, z);
    }

    else if (x == z && x > y)
    {

        printf("YES\n%d %d 1\n", x, y);
    }

    else
        printf("NO\n");
}