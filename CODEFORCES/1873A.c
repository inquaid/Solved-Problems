#include <stdio.h>
#include <string.h>
void check()
{
    char str[130];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    // puts(str);
    if (str[0] == 'a' || str[1] == 'b' || str[2] == 'c')
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int a;
    scanf("%d", &a);
    getchar();
    for (int i = 0; i < a; i++)
    {
        check();
    }

    return 0;
}