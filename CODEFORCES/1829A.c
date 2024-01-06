#include <stdio.h>
#include <string.h>

void check()
{

    char str[10];
    gets(str);
    // str[strcspn(str, "\n")]= '\0';
    char code[] = "codeforces";
    // getchar();

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {

        if (code[i] != str[i])
        {
            sum++;
        }
    }
    printf("%d\n", sum);
    sum = 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        check();
    }
}