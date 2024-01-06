// kiyotakaa

#include <stdio.h>
#include <string.h>

void repeat();

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        char a[1202];
        gets(a);
        // puts(a);
        int total = strlen(a);
        char cntt[5] = {a[0], '\0'};
        int cnt;
        cnt = atoi(cntt);
        int result = (4 * cnt) - (4 - total);
        // printf("%d ",result);
        int g = result % 4;
        int k = 0;
        if (total == 1)
        {
            k = 1;
        }
        if (total == 2)
        {
            k = 3;
        }
        if (total == 3)
        {
            k = 6;
        }

        int step = ((result / 4) * 10) + k;
        printf("%d\n", step);
    }
    return 0;
} // kiyotakaa

#include <stdio.h>
#include <string.h>

void repeat();

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        char a[1202];
        gets(a);
        // puts(a);
        int total = strlen(a);
        char cntt[5] = {a[0], '\0'};
        int cnt;
        cnt = atoi(cntt);
        int result = (4 * cnt) - (4 - total);
        // printf("%d ",result);
        int g = result % 4;
        int k = 0;
        if (total == 1)
        {
            k = 1;
        }
        if (total == 2)
        {
            k = 3;
        }
        if (total == 3)
        {
            k = 6;
        }

        int step = ((result / 4) * 10) + k;
        printf("%d\n", step);
    }
    return 0;
}