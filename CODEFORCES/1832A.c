#include <stdio.h>
#include <string.h>
void repeat()
{
    char str[60];
    gets(str);
    int c = strlen(str);
    // printf("%d",c);
    c = (c % 2 == 0) ? c - 1 : c - 2;

    int d = 0;
    for (int i = 0, j = 1; i < (c / 2); i++, j++)
    {
        if (str[i] != str[j])
        {
            d++;
            break;
        }
    }

    if (d != 0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}