#include <stdio.h>
void check(int a, int b)
{
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b == 0)
        printf("0\n");
    else
    {
        int c = a / b;
        int d = (c + 1) * b;
        printf("%d\n", d - a);
    }
}
int main()
{
    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        check(a, b);
    }
}