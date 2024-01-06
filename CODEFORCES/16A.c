#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int func2(int *ary, int k)
{
    for (int i = 0; i < k - 1; i++)
    {
        if (ary[i] == ary[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int func(char *str, int n, int m, int *ary)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        gets(str);
        for (int j = 0; j < m - 1; j++)
        {
            if (str[j] != str[j + 1])
            {
                return 0;
            }
        }
        char temp[2] = {str[0], '\0'};

        ary[k] = atoi(temp);
        k++;
    }

    if (func2(ary, k))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    getchar();
    int ary[n];
    char str[1212];

    if (func(str, n, m, ary))
    {
        printf("YES");
    }

    else
        printf("NO");
}