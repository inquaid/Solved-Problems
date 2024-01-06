#include <stdio.h>
#include <string.h>
int subs(const char *a, const char *b)
{
    char *result = strstr(a, b);
    return (result != NULL);
}

int main()
{
    char str[12];
    gets(str);
    char a[2] = {str[0], '\0'};
    char b[2] = {str[1], '\0'};
    // printf("%s %s",a,b);
    char main[122];
    gets(main);
    if (subs(main, a))
        printf("YES");
    else if (subs(main, b))
        printf("YES");
    else
        printf("NO");
}