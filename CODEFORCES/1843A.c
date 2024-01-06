#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void repeat(void);

int main()
{
    int n, i;
    scanf("%d", &n);
    while (i < n)
    {
        repeat();
        i++;
    }
}

void repeat(void)
{
    int a, result = 0;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    for (int i = 0; i < a; i++)
    {
        // printf("%d " ,ary[i]);
    }

    for (int i = 0, j = a - 1; i < a / 2; i++, j--)
    {
        result += ary[j] - ary[i];
    }
    printf("%d\n", result);
}
