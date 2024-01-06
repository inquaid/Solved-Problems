#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int checK(int n)
{
    char a[n];
    gets(a);

    bool alpha[26] = {false};
    for (int i = 0; i < n; i++)
    {
        char ch = a[i];
        if ('a' <= ch && ch <= 'z')
        {
            alpha[ch - 'a'] = true;
        }

        else if ('A' <= ch && ch <= 'Z')
        {
            alpha[ch - 'A'] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        // printf("%d ", alpha[i]);
        if (!alpha[i])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    // char str[n];
    if (checK(n))
        printf("YES");
    else
        printf("NO");
}