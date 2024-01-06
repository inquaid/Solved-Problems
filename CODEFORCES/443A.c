#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool tray(char *str, int n)
{
    bool ary[26] = {false};
    for (int i = 0; i < n; i++)
    {
        int ch = str[i] - 97;
        ary[ch] = true;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (ary[i])
            sum++;
    }

    printf("%d", sum);
}

int main()
{
    char str[1000];
    gets(str);
    int n = strlen(str);
    tray(str, n);
}