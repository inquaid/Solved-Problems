#include <stdio.h>

void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
        printf("\n");
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
    int y = (a % 2 == 0) ? a / 2 : a / 2 + 1;
    for (int i = 0, j = a - 1; i < y; i++, j--)
    {
        printf("%d ", ary[i]);
        if (i == a / 2)
            break;
        // printf("\t%d\n",i);
        printf("%d ", ary[j]);
    }
}