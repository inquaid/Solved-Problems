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
    int ary[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ary[i]);
    }
    qsort(ary, 3, sizeof(int), compare);
    // for(int i=0;i<3;i++) {
    // 		printf("%d ", ary[i]);
    // 	}
    int a = ary[0];
    int b = ary[1];
    int c = ary[2];
    int bb = 0, cc = 0;
    int i, j;
    for (i = 0; i <= 3; i++)
    {
        // printf(" %d ",b);
        if (b == a)
        {
            bb++;
            break;
        }
        b = b - a;
    }
    for (j = 0; j <= 3; j++)
    {
        // printf(" %d ",c);
        if (c == a)
        {
            cc++;
            break;
        }
        c = c - a;
    }

    // printf("  %d ",b);
    // printf("%d",c);
    if ((i + j) < 4)
    {
        (bb == 1) ? ((cc == 1) ? printf("YES\n") : printf("NO\n")) : printf("NO\n");
    }
    else
        printf("NO\n");
}