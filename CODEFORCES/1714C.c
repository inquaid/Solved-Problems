#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {

        int a, p = 9, q = 0;
        scanf("%d", &a);
        int ary[1212];
        int y = 0;
        for (int i = 0;; i++)
        {
            if (a >= p)
            {
                a -= p;
                ary[y] = p;
                y++;
                // printf("%d ",a);
            }
            if (a < p)
            {
                // printf("%d",a);
                ary[y] = a;
                y++;
                break;
            }
            p--;
        }
        qsort(ary, y, sizeof(int), check);
        for (int i = 0; i < y; i++)
        {
            if (ary[i] != 0)
            {
                printf("%d", ary[i]);
            }
        }
        printf("\n");
    }
}