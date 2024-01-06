#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        int a, cnt = 0;
        scanf("%d", &a);
        getchar();
        char str[a];
        gets(str);
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (str[i] == str[j] && str[i + 1] == str[j + 1])
                {
                    cnt++;
                    break;
                    // printf("%c %c ",str[i],str[i+1]);
                }
            }
        }

        printf("%d \n", abs(a - cnt - 1));
    }
}