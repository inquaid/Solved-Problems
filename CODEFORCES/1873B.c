#include <stdio.h>
#include <stdio.h>

void check();

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
}

void check()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }
    qsort(ary, a, sizeof(int), compare);

    ary[0] = ary[0] + 1;

    int mult = 1;
    for (int i = 0; i < a; i++)
    {
        mult *= ary[i];
    }

    printf("%d\n", mult);
}