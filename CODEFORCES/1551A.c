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
    int a;
    scanf("%d", &a);

    int b = (a % 3 == 0) ? a / 3 : (a / 3) + 1;

    if ((b + (2 * (a / 3))) == a)
    {

        printf("%d %d\n", b, a / 3);
    }

    else
        printf("%d %d\n", a / 3, b);
}