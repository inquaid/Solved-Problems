#include <stdio.h>
#include <string.h>

void repeat();

int main()
{

    int n, salasa;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        char str[123];
        gets(str);
        int cnt = 0, j = 0, k = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == '1')
            {
                j = i;
                break;
            }
        }
        for (int i = strlen(str) - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                k = i;
                break;
            }
        }

        for (int i = j; i <= k; i++)
        {
            if (str[i] == '0')
            {
                cnt++;
            }
        }
        if (j == k)
            printf("0\n");
        else
            printf("%d\n", cnt);
    }
}