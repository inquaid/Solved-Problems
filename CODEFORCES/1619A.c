#include <stdio.h>
#include <string.h>

void repeat();

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

void repeat()
{
    char str[120];
    gets(str);
    int n = strlen(str);
    if (n % 2 != 0)
        printf("NO\n");
    else
    {
        int cnt = 0;
        int m = n / 2;
        for (int i = 0; i < m; i++)
        {
            if (str[i] != str[i + m])
            {
                cnt++;
                break;
            }
        }
        if (cnt > 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}