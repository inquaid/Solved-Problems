#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    while (n--)
    {

        int a, b;
        scanf("%d%d", &a, &b);
        getchar();
        char str[1500];
        int cnt = 0;
        for (int i = 0; i < a; i++)
        {
            gets(str);

            if (i == (a - 1))
            {
                for (int i = 0; i < b; i++)
                {
                    if (str[i] == 'D')
                    {
                        cnt++;
                    }
                }
            }

            else if (str[b - 1] == 'R')
            {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }
}