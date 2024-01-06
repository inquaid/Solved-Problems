#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, a;

    scanf("%d%d", &a, &n);

    for (int i = 0; i < n; i++)
    {
        if (a % 10 == 0)
        {
            a = a / 10;
        }
        else
        {
            a = a - 1;
        }
    }

    printf("%d", a);
}