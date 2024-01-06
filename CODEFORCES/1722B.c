#include <stdio.h>
#include <string.h>

void repeat();
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
    return 0;
}

void repeat()
{
    int a;
    scanf("%d", &a);
    getchar();
    char str[101];
    char str2[101];
    gets(str);
    gets(str2);
    // lets make all the greens blue.
    for (int i = 0; i < a; i++)
    {
        if (str[i] == 'B')
        {
            str[i] = 'G';
        }
        if (str2[i] == 'B')
        {
            str2[i] = 'G';
        }
    }
    // puts(str);
    // // printf("\n");
    // puts(str2);
    if (strcmp(str, str2) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}