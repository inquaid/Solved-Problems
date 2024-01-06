#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, a, b;
    scanf("%d%d", &m, &n);
    int temp = m;
    m = (m > n) ? m : n;
    n = (m > n) ? n : temp;
    // printf("%d %d",m,n);
    int re = 0;
    for (a = 0; a <= n; a++)
    {
        for (b = 0; b <= n; b++)
        {
            if (((pow(a, 2) + b) == n) && ((pow(b, 2) + a) == m))
            {
                re++;
            }
        }
    }
    printf("%d", re);
}