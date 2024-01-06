#include <stdio.h>
#include <string.h>
void check()
{
    char str[1000];
    gets(str);
    int c = strlen(str) - 1;
    int p = strlen(str) - 2;
    if (c < 10)
    {
        puts(str);
        printf("\n");
    }
    else
    {
        char newstr[1000];
        strcpy(newstr, str);
        newstr[0] = str[0];
        newstr[c] = str[c];
        printf("%c%d%c\n", newstr[0], p, newstr[c]);
    }
}
int main()
{
    char str[1000];
    int t;
    scanf("%d", &t);
    for (int i = 0; i <= t; i++)
    {
        check();
    }

    return 0;
}