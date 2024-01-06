#include <stdio.h>
#include <string.h>
int main()
{
    char str[105];
    gets(str);
    int n = strlen(str);
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            sum = 0;
        }
        if (str[i] == '0')
        {
            sum++;
        }
        if (sum == 7)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            sum1 = 0;
        }
        if (str[i] == '1')
        {
            sum1++;
        }
        if (sum1 == 7)
            break;
    }
    // printf("%d ",sum1);
    if (sum >= 7 || sum1 >= 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}