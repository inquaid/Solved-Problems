#include <stdio.h>
#include <string.h>
#define s scanf
#define p printf
int main()
{
    char str[100000];
    char str2[100000];

    gets(str);
    //  puts(str);
    int i = 0;
    for (i = 0; i < strlen(str); i++)
    {

        if (str[i] > '4')
            str2[i] = '9' - (str[i] - '0');
        else
            str2[i] = str[i];
    }
    str2[i] = '\0';
    if (str[0] == '9')
        str2[0] = '9';
    puts(str2);
}