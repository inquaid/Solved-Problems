#include <stdio.h>

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
    int ary[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ary[i]);
    }
    int a = ary[0] + ary[1];
    int b = ary[1] + ary[2];
    int c = ary[0] + ary[2];
    if (a >= 10 || b >= 10 || c >= 10)
        printf("YES\n");
    else
        printf("NO\n");
}