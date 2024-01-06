#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isSubs(const char *a, const char *b)
{
    char *result = strstr(a, b);
    return (result != NULL);
}

void repeat(void);

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
void repeat(void)
{
    int a = 0, b = 0, cnt = 0;
    char *str = (char *)malloc(20000000 * sizeof(char));
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
            b++;
        else
            a++;

        if ((a - b) < 0)
        {
            cnt++;
            break;
        }
    }
    if (str[n - 1] == 'B' && cnt == 0)
        printf("YES\n");
    else
        printf("NO\n");
    free(str);
}