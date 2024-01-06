#include <stdio.h>
#include <string.h>

void check();

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

void check()
{
    char str[7];
    gets(str);
    // puts(str);

    int sum = str[0] + str[1] + str[2];
    int sum2 = str[3] + str[4] + str[5];
    if (sum == sum2)
        printf("YES\n");
    else
        printf("NO\n");
}
