#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    for (int i = 0; i < a; i++)
    {
        if ((5 - ary[i]) >= b)
            sum++;
    }
    printf("%d", sum / 3);
}