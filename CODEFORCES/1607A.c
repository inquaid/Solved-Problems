#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {

        char str[60];
        char str2[60];
        gets(str);
        gets(str2);
        int ary[123], k = 0;
        int n = strlen(str), m = strlen(str2);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (str2[i] == str[j])
                {
                    ary[k] = j + 1;
                    k++;
                    break;
                }
            }
        }
        int minus = 0;
        for (int i = 0; i < k - 1; i++)
        {
            minus += abs(ary[i] - ary[i + 1]);
        }
        printf("%d \n", minus);
    }
}