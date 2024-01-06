#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int ary[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &ary[i]);
        }
        qsort(ary, 3, sizeof(int), compare);

        if (ary[0] == ary[1] && ary[2] % 2 == 0)
        {
            printf("yes\n");
        }
        else if (ary[1] == ary[2] && ary[0] % 2 == 0)
        {
            printf("yes\n");
        }
        else if ((ary[2] + ary[1]) == ary[0])
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
}