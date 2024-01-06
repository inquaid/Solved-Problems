#include <stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    while (y--)
    {
        int a, b, cnt = 0;
        scanf("%d%d", &a, &b);
        getchar();
        char str[a];
        gets(str);
        for (int i = 0; i < a; i++)
        {
            if (str[i] == 'B')
            {
                cnt++;
                i += b - 1;
            }
        }
        printf("%d\n", cnt);
    }
}