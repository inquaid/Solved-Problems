#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[150];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int up = 0, lo = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
            up++;
        if (islower(str[i]))
            lo++;
    }
    char resa[150];
    if (up > lo)
    {
        for (int i = 0; i <= strlen(str); i++)
        {
            resa[i] = toupper(str[i]);
        }
    }
    if (up <= lo)
    {
        for (int i = 0; i <= strlen(str); i++)
        {
            resa[i] = tolower(str[i]);
        }
    }
    puts(resa);
}