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

    int a, even = 0, odd = 0;
    scanf("%d", &a);
    int ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);

        (ary[i] % 2 == 0) ? even++ : odd++;
    }
    if (odd % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}