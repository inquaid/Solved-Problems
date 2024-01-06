#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (b > a) ? a : b;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {

        int a, cnt = 0;
        scanf("%d", &a);
        int ary[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &ary[i]);
        }
        for (int i = 0; i < a - 1; i++)
        {

            int maxx = max(ary[i], ary[i + 1]);
            int minn = min(ary[i], ary[i + 1]);
            minn *= 2;
            while (minn < maxx)
            {
                minn *= 2;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}