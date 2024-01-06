#include <stdio.h>
#include <string.h>
int check()
{
    int ary[1000];
    int sum = 0;
    for (int i = 0; i <= 2; i++)
    {
        scanf("%d", &ary[i]);
    }

    int n = ary[0] + ary[1] + ary[2];
    if (n >= 2)
        sum++;
    return sum;
}
int main()
{

    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = sum + check();
    }

    printf("%d", sum);
}