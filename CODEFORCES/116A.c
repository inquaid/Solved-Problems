#include <stdio.h>
int main()
{
    int a, temp, sum = 0, max = 0;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d", &temp);
        sum -= temp;
        if (sum > max)
            max = sum;
        scanf("%d", &temp);
        sum += temp;
        if (sum > max)
            max = sum;
    }
    printf("%d", max);
}