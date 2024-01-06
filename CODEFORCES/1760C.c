// oneday am gonna fly away,. oneday...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h = 0;
    scanf("%d", &h);
    while (h--)
    {

        long long int a, i = 0, max = 0, max2 = 0;
        scanf("%lld", &a);
        long long int *ary = (long long int *)calloc(a, sizeof(long long int));
        while (a--)
        {
            scanf("%lld", &ary[i]);
            if (ary[i] > max)
            {
                max2 = max;
                max = ary[i];
            }
            else if (ary[i] > max2 && ary[i] <= max)
            {
                max2 = ary[i];
            }
            i++;
        }

        for (int l = 0; l < i; l++)
        {
            // printf("%d ",ary2[i])
            if (ary[l] == max)
            {
                printf("%lld ", ary[l] - max2);
            }
            else
                printf("%lld ", ary[l] - max);
        }
        printf("\n");

        free(ary);
    }

    return 0;
}