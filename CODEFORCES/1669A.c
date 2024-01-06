#include <stdio.h>
#include <math.h>
void check(int a)
{
    scanf("%d", &a);
    if (a >= 1900)
        printf("Division 1\n");
    else if (a >= 1600 && a <= 1899)
        printf("Division 2\n");
    else if (a >= 1400 && a <= 1599)
        printf("Division 3\n");
    else if (a <= 1399)
        printf("Division 4\n");
}
int main()
{
    int n;
    if (n >= 1 && n <= pow(10, 4))
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int a;
            check(a);
        }
    }

    return 0;
}