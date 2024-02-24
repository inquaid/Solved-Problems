#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n, m, result = 0;
    scanf("%d%d", &n, &m);
    int ary[n][n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[0][i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[1][i]);
    }

    for (int i = 0; i < n; i++)
    {
        int mx = -5, carry;
        for (int i = 0; i < n; i++)
        {
            if (mx < ary[0][i])
            {
                mx = ary[0][i];
                carry = i;
            }
        }
        if (m <= 0)
        {
            break;
        }
        if (m >= ary[1][carry])
        {
            result += (ary[1][carry] * ary[0][carry]);
            m -= ary[1][carry];
        }
        else
        {

            result += (m * ary[0][carry]);
            m = 0;
        }
        ary[0][carry] = 0;
    }

    printf("%d ", result);
}
