#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    getchar();
    char str[60];
    gets(str);
    int n = strlen(str), count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
            count++;
    }

    printf("%d", count);
}