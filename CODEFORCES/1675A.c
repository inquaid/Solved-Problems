#include <stdio.h>
#include <stdlib.h>
void repeat(void);

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{

    int a, b, c, x, y;
    scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
    if (a >= x && b >= y)
        printf("YES\n");
    else
    {
        int temp = (x <= a) ? 0 : x - a;
        int temp2 = (y <= b) ? 0 : y - b;
        // printf("%d %d",temp,temp2);
        if ((temp + temp2) <= c)
            printf("YES\n");
        else
            printf("NO\n");
    }
}