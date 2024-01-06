#include <stdio.h>
int main()
{
    int n, h;
    scanf("%d%d", &n, &h);
    int ary[n];
    int more = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
        if (ary[i] > h)
            more++;
    }

    printf("%d", n + more);
    return 0;
}