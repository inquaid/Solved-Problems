#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    getchar();
    char str[a];
    gets(str);
    int count = 0, result = 0;
    for (int i = 0; i < a; i++)
    {
        if (str[i] == 'x')
        {
            count++;
            if (count >= 3)
                result++;
        }

        else
        {
            count = 0;
        }
    }

    printf("%d", result);
}