#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
        ary[i] = abs(ary[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    // for(int i=0;i<a;i++) {
    //     printf("%d ",ary[i]);
    // }

    printf("%d", ary[0]);
}