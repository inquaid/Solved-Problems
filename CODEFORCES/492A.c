#include <stdio.h>

int check(int a)
{
    int sum = 0, sum1 = 0, cnt = 0, i;
    for (i = 1;; i++)
    {
        sum += i;
        sum1 += sum;
        cnt++;
        if (sum1 > a)
            return (i - 1);
        if (sum1 == a)
            return i;
    }
}

int main()
{
    int a, sum = 0, i, sum1 = 0, cnt = 0;
    scanf("%d", &a);
    printf("%d ", check(a));
}