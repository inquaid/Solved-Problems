#include <stdio.h>
int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    for (i = 1;; i++)
    {
        a = a * 3;
        b = b * 2;
        // printf("%d %d\t", a,b);
        if (a > b)
            break;
    }
    printf("%d", i);
}