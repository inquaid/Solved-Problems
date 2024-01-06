#include <stdio.h>
#include <stdlib.h>

void repeat();

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

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

    long long int ary[3];
    for (long long int i = 0; i < 3; i++)
    {
        scanf("%lld", &ary[i]);
    }
    qsort(ary, 3, sizeof(long long int), compare);
    long long int n;
    scanf("%lld", &n);
    // for(long long int i=0;i<3;i++) {
    //   printf("%lld",ary[i]);
    // }
    if (ary[0] == ary[1] && ary[1] == ary[2] && n % 3 == 0)
        printf("YES\n");

    else
    {
        long long int p = ary[2] - ary[1];
        long long int q = ary[2] - ary[0];
        long long int z = p + q;
        if (z > n)
            printf("NO\n");
        else if ((n - z) % 3 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}