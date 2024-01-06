#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int compare2(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
void check();

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
    return 0;
}

void check()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ary[a], ary2[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary2[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    qsort(ary2, a, sizeof(int), compare2);

    for (int i = 0; i < b; i++)
    {
        if (ary[i] < ary2[i])
            ary[i] = ary2[i];
    }
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += ary[i];
    }

    printf("%d\n", sum);
}