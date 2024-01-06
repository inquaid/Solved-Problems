#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void check()
{
    int ary[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ary[i]);
    }
    qsort(ary, 3, sizeof(int), compare);

    if ((ary[0] + ary[1]) == ary[2])
        printf("YES\n");
    else
        printf("NO\n");
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