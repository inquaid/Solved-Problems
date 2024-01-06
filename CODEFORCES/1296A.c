#include <stdio.h>

void repeat(void);

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{
    int a, sum = 0, odd = 0, even = 0;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
        sum += ary[i];
        if (ary[i] % 2 != 0)
        {
            odd++;
        }
        else
            even++;
    }
    if (sum % 2 != 0)
        printf("YES\n");
    else if (even == 0 && a % 2 != 0)
        printf("YES\n");
    else if ((even > 0 && odd > 0))
        printf("YES\n");
    else
        printf("NO\n");
}
