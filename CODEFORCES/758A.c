#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
    }

    qsort(ary, a, sizeof(int), compare);
    // for(int i=0;i<a;i++) {
    //     printf("%d ", ary[i]);
    //   }
    int result = 0;

    for (int i = 1; i < a; i++)
    {
        int temp = (ary[0] - ary[i]);
        result = result + temp;
        // temp=0;
    }
    printf("%d", result);
}