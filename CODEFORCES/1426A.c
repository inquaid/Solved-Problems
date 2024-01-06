#include <stdio.h>
void check(int a, int b)
{

    if (a <= 2)
    {
        printf("1\n");
    }
    else if (a > 2 && a <= (b + 2))
    {
        printf("2\n");
    }
    else
    {
        a = a - 2;
        int result = (a % b == 0) ? a / b + 1 : a / b + 2;

        printf("%d\n", result);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        check(a, b);
    }

    return 0;
}