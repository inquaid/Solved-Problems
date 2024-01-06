#include <stdio.h>
#include <stdlib.h>

void repeat(void);

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{

    int a, cnt = 4;
    scanf("%d", &a);
    int ary[a];
    for (int i = 3; i >= 0; i--)
    {
        ary[i] = a % 10;
        a /= 10;
    }

    if (ary[0] != 1 && ary[0] != 0)
    {
        cnt += abs(ary[0] - 1);
    }
    else if (ary[0] != 1 && ary[0] == 0)
    {
        cnt += abs(10 - 1);
    }
    for (int i = 0; i < 3; i++)
    {

        if (ary[i] == 0 && ary[i + 1] == 0)
        {
            continue;
        }
        else if (ary[i] == 0)
        {
            int temp = 10;
            cnt += abs(temp - ary[i + 1]);
        }
        else if (ary[i + 1] == 0)
        {
            int temp = 10;
            cnt += abs(ary[i] - temp);
        }

        else
        {
            cnt += abs(ary[i] - ary[i + 1]);
        }
    }
    printf("%d\n", cnt);
}