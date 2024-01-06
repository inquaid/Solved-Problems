#include <stdio.h>

int check(char *str, int a)
{
    int x = 0, y = 0;
    for (int i = 0; i < a; i++)
    {
        if (str[i] == 'U')
        {
            y++;
        }
        if (str[i] == 'D')
        {
            y--;
        }
        if (str[i] == 'R')
        {
            x++;
        }
        if (str[i] == 'L')
        {
            x--;
        }

        if (x == 1 && y == 1)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {

        int a;
        scanf("%d", &a);
        getchar();
        char str[a];
        gets(str);
        if (check(str, a))
            printf("YES\n");
        else
            printf("NO\n");
    }
}