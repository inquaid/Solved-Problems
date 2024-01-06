#include <stdio.h>
#include <stdlib.h>

int check();

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

int check()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    int f = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (ary[i] == ary[j])
            {
                f++;
                break;
            }
        }
    }
    if (f > 0)
        printf("NO\n");
    else
        printf("YES\n");
}