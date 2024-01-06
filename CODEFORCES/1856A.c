#include <stdio.h>

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
    long long int a;
    scanf("%lld", &a);
    long long int ary[a];
    for (long long int i = 0; i < a; i++)
    {
        scanf("%lld", &ary[i]);
    }
    long long int res = 0;
    for (long long int i = a - 1; i > 0; i--)
    {
        if (ary[i] < ary[i - 1])
        {
            res = i;
            break;
        }
    }
    // prlong long intf("%lld",res);
    long long int max = 0;
    for (long long int i = 0; i < res; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    printf("%lld\n", max);
}