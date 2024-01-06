#include <stdio.h>

void repeat(void);

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{

    int x, k;
    scanf("%d%d", &x, &k);
    for (int i = 0;; i++)
    {
        int temp = x, sum = 0;
        for (int i = 0; temp > 0; i++)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == k || sum % k == 0)
        {
            printf("%d\n", x);
            break;
        }
        else
            x++;
    }
}