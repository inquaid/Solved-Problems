#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    char str2[100];
    gets(str);
    gets(str2);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < strlen(str2); i++)
    {
        str2[i] = tolower(str2[i]);
    }

    int ok = strcmp(str, str2);

    if (ok > 0)
        printf("1");
    if (ok < 0)
        printf("-1");
    if (ok == 0)
        printf("0");

    return 0;
}