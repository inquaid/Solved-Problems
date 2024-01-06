#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, min = 0, cnt = 0;
        scanf("%d", &a);
        int ary[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &ary[i]);
            if (i == 0)
            {
                min = ary[i];
            }
            else if (ary[i] < min)
            {
                min = ary[i];
            }
        }
        for (int i = 0; i < a; i++)
        {
            if (ary[i] == min)
            {
                cnt++;
            }
        }
        printf("%d \n", a - cnt);
    }
}