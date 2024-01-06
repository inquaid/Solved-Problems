#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(long long int *)b - *(long long int *)a);
}

int main()
{
    long long int n, q;
    scanf("%lld%lld", &n, &q);
    //  long long int ary[n];
    long long int *ary = (long long int *)malloc(n * sizeof(long long int));
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &ary[i]);
    }
    qsort(ary, n, sizeof(long long int), compare);

    long long int *prefix_sum = (long long int *)malloc((n + 1) * sizeof(long long int));
    prefix_sum[0] = 0;
    for (long long int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + ary[i - 1];
    }

    while (q--)
    {

        long long int x, y;
        scanf("%lld%lld", &x, &y);
        long long int sum = prefix_sum[x] - prefix_sum[x - y];

        if (x == y)
        {
            printf("%lld\n", prefix_sum[x]);
        }
        else
        {
            printf("%lld\n", sum);
        }
    }

    free(ary);
    free(prefix_sum);
}
