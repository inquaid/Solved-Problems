#include <stdio.h>
#include <string.h>
int check(const char *str, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char str[120];
    fgets(str, 120, stdin);
    str[strcspn(str, "\n")] = '\0';
    // puts(str);
    int n = strlen(str);
    if (check(str, n))
        printf("YES");
    else
        printf("NO");
    return 0;
}