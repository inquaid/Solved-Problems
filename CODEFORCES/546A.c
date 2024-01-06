#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int y = k * (w * (w + 1)) / 2;
    int g;
    if (n < y)
        printf("%d", y - n);
    else
        printf("0");
    // printf("%d", n);
}