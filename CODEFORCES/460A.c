#include <stdio.h>
void scan(int *a)
{
    scanf("%d", a);
}
void print(int a)
{
    printf("%d", a);
}

int main()
{
    int a, b;
    int vajjo = 0;
    scan(&a);
    scan(&b);

    if (a < b)
        printf("%d", a);
    else if (a == b)
    {
        printf("%d", a + 1);
    }
    else if (a > b)
    {
        int d = a;
        while (d >= b)
        {
            int c = d / b;
            vajjo = vajjo + c;
            int f = d % b;
            d = c + f;
        }
        print(a + vajjo);
    }
    return 0;
}