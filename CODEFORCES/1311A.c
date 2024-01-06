#include <stdio.h>
int main()
{
    int t, a, b;
    scanf("%d", &t);

    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            sum = sum + 0;
        }
        else if (a < b && (b - a) % 2 != 0)
        {
            sum = sum + 1;
        }
        else if (a < b && (b - a) % 2 == 0)
        {
            sum = sum + 2;
        }
        else if (a > b && (a - b) % 2 != 0)
        {
            sum = sum + 2;
        }
        else if (a > b && (a - b) % 2 == 0)
        {
            sum = sum + 1;
        }
        printf("%d \n", sum);
        sum = 0;
    }

    return 0;
}
