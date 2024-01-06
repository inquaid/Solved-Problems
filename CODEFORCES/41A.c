#include <stdio.h>
#include <string.h>
#define p printf
#define ls strlen
int compare(const char *a, const char *b)
{
    if (ls(a) != ls(b))
        return 0;
    for (int i = 0; i < ls(a); i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int main()
{
    char str[150];
    char str2[150];
    char strre[150];
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);

    str[strcspn(str, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    // puts(str);
    // puts(str2);
    int i, j, w;
    int n = ls(str) - 1;
    for (i = 0, j = n; i <= n; i++, j--)
    {
        strre[i] = str[j];
    }
    strre[n + 1] = '\0';
    // int r = strcmp(str2, strre);
    int result = compare(strre, str2);

    // p("%d",r);
    if (result)
    {
        p("YES");
    }
    else
    {
        p("NO");
    }
    // for (w = 0; w < ls(str); w++)
    // {
    //     printf("%c", strre[w]);
    // }
    return 0;
}