#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isSubs(const char *a, const char *b)
{
    char *result = strstr(a, b);
    return (result != NULL);
}

int change(char *str)
{
    int i = 0;
    if (str[i] == 'O' && str[i + 1] == 'O')
    {
        str[i] = '+';
        str[i + 1] = '+';
    }
    else if (str[i + 3] == 'O' && str[i + 4] == 'O')
    {
        str[i + 4] = '+';
        str[i + 3] = '+';
    }
    return *str;
}

int main()
{
    int a, i = 0, l = 0;
    scanf("%d", &a);
    getchar();
    char *str = (char *)malloc(10000 * sizeof(char));
    char result[10000][100];
    while (a--)
    {
        gets(str);
        // if (l == 1)
        // {
        //     puts(str);
        //     continue;
        // }

        {
            if (isSubs(str, "OO"))
            {
                if (l == 0)
                {
                    change(str);
                    l++;
                }
            }
        }
        strcpy(result[i], str);
        // puts(str);
        // scanf("%s",&str);
        i++;
    }
    free(str);

    if (l == 1)
    {
        printf("YES\n");

        for (int k = 0; k < i; k++)
        {
            printf("%s \n", result[k]);
        }
    }
    else
        printf("NO");
}