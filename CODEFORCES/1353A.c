#include <stdio.h>

int min(int a, int b)
{

    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n, m;
        scanf("%d%d", &n, &m);

        printf("%d\n", (min(2, (n - 1))) * m);
    }

    return 0;
}