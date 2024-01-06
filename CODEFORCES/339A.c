#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int l = strlen(str);
    // puts(str);
    int one = 0, two = 0, three = 0;
    for (int i = 0; i < l; i++)
    {
        if (str[i] == '1')
        {
            one++;
        }
        if (str[i] == '2')
        {
            two++;
        }
        if (str[i] == '3')
        {
            three++;
        }
    }
    char strone[100] = "";
    for (int i = 0; i < one; i++)
    {
        strcat(strone, "1+");
    }

    char strtwo[100] = "";
    for (int i = 0; i < two; i++)
    {
        strcat(strtwo, "2+");
    }

    char strthree[100] = "";
    for (int i = 0; i < three; i++)
    {
        strcat(strthree, "3+");
    }

    strcat(strone, strtwo);
    strcat(strone, strthree);
    int p = strlen(strone) - 1;
    char print[100];
    for (int i = 0; i < p; i++)
    {
        print[i] = strone[i];
    }
    print[p] = '\0';
    printf("%s", print);
    return 0;
}