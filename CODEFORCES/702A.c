#include <stdio.h>
int main()
{
    int a, in = 0, i = 0, cnt = 0, cmp = 0;
    scanf("%d", &a);
    int ary[a];
    while (a--)
    {
        scanf("%d", &ary[i]);
        if (ary[i] > in)
        {
            in = ary[i];
            cnt++;
        }
        else
        {
            if (cnt > cmp)
            {
                cmp = cnt;
            }
            cnt = 1;
            in = ary[i];
        }

        i++;
    }
    if (cnt > cmp)
    {
        cmp = cnt;
    }
    for (int j = 0; j < i; j++)
    {
        // printf("%d ",ary[j]);
    }

    printf("%d", cmp);
}