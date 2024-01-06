#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000] = " ";
    char str1[1000] = " ";
    char str2[1000] = " ";
    gets(str);
    gets(str1);
    long long int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str1[i])
            str2[i] = '0';
        else
            str2[i] = '1';
    }
    str2[n] = '\0';
    puts(str2);

    return 0;
}
