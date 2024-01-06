#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a, d = b;
    a = (a > b) ? a : d;
    b = (b < a) ? b : c;
    // printf("%d%d",a,b);
    if (a == b)
        printf("%d 0", a);

    else
    {
        int g = a - b;
        if (g > 1)
            g = g / 2;
        else
            g = 0;

        printf("%d %d", b, g);
    }
}