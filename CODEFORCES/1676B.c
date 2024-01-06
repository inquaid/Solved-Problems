#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}

void repeat()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        sum += ary[i] - ary[0];
    }
    printf("%d\n", sum);
}