#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[150];
    gets(str);

    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'y' || str[i] == 'Y' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = '5';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '5')
            continue;
        printf(".%c", tolower(str[i]));
    }
    return 0;
}