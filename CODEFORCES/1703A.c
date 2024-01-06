#include <stdio.h>
#include <ctype.h>
#include <string.h>

void check()
{
    int i;

    char str[4];
    fgets(str, sizeof(str), stdin);
    getchar();

    char new[strlen(str)];
    for (i = 0; i < strlen(str); i++)
    {
        new[i] = tolower(str[i]);
    }
    new[i] = '\0';

    if (new[0] == 'y' && new[1] == 'e' && new[2] == 's')
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < (n); i++)
    {
        check();
    }
    return 0;
}