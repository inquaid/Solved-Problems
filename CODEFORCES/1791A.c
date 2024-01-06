#include <stdio.h>
#include <string.h>

void repeat();

int subs(const char *a, const char *b)
{
    char *result = strstr(a, b);
    return (result != NULL);
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

void repeat()
{
    char a[100];
    scanf("%s", &a);
    getchar();

    char str[] = "codeforces";
    if (subs(str, a))
        printf("YES\n");
    else
        printf("NO\n");
}