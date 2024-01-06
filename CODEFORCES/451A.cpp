#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    if (m == n && m != 2)
    {
        if (m % 2 == 0)
        {
            printf("Malvika");
        }
        else
        {
            printf("Akshat");
        }
    }

    else if (m == n && m == 2)
    {
        printf("Malvika");
    }

    else if (m < n)
    {
        if (m % 2 == 0)
            printf("Malvika");
        else
            printf("Akshat");
    }

    else if (n < m)
    {
        if (n % 2 == 0)
            printf("Malvika");
        else
            printf("Akshat");
    }

    else
        printf(" u r dead");
    return 0;
}