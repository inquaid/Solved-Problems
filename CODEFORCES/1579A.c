#include <stdio.h>
#include <string.h>
void check()
{
    char str[55];
    gets(str);

    // puts(str);
    int n = strlen(str);
    // printf("%d", n);
    int count = 0;
    int countt = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
            count++;
        else
            countt++;
    }
    // printf("%d\t%d",count,countt);
    if (count == countt)
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
        check();
    }
    return 0;
}