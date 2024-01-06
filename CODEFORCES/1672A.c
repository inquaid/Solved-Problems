#include <stdio.h>

int main()
{
    int T, jk;
    scanf("%d", &T);

    while (T--)
    {
        int n, cnt = 0;
        scanf("%d", &n);

        while (n--)
        {
            int a;
            scanf("%d", &a);

            {
                cnt += a - 1;
            }
        }

        if (cnt % 2 == 0)
            printf("maomao90\n");
        else
            printf("errorgorn\n");
    }
    return 0;
}