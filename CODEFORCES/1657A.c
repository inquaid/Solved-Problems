#include <stdio.h>
#include <math.h>

int check(int a, int b)
{

    int f = (sqrt(a + b));
    if ((f * f) == (a + b))
        return 1;
    else
        return 0;
}
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
    int a, b, c;
    scanf("%d%d", &a, &b);
    a = a * a;
    b = b * b;
    if (a == 0 && b == 0)
        printf("0\n");
    else if (check(a, b))
        printf("1\n");
    else
        printf("2\n");
}