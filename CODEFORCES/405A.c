#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    if (int_a < int_b)
    {
        return -1;
    }
    else if (int_a > int_b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }
    size_t arysize = sizeof(ary) / sizeof(ary[0]);

    qsort(ary, arysize, sizeof(int), compare);

    for (int i = 0; i < a; i++)
    {
        printf("%d ", ary[i]);
    }
}