#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int ary[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, 3, sizeof(int), compare);

    int d = (ary[1] - ary[0]) + (ary[2] - ary[1]);

    printf("%d", d);
    // for(int i=0;i<3;i++) {
    //   printf("%d ", ary[i]);
    // }
}