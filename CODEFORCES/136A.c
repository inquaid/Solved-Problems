#include <stdio.h>
int main()
{
    int a, i = 0;
    scanf("%d", &a);
    int ary[a], arr[a];
    while (a--)
    {
        scanf("%d", &ary[i]);
        arr[ary[i] - 1] = i + 1;

        i++;
    }

    for (int k = 0; k < i; k++)
    {
        printf("%d ", arr[k]);
    }
}