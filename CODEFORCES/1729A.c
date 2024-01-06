#include <stdio.h>

void repeat();

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    do
    {
        repeat();
        i++;
    } while (i < n);
}

void repeat()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    b = (b > c) ? b : c + (c - b);
    if (a == b)
        printf("3\n");
    else
    {
        (a < b) ? printf("1\n") : printf("2\n");
    }
}
