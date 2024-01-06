#include <stdio.h>
void check()
{
    int a;
    if (a == 1)
        a = 2;
    scanf("%d", &a);
    a = a * 2;
    int ary[a];
    for (int i = 0; i < (a); i++)
    {
        scanf("%d", &ary[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < (a); i++)
    {
        if (ary[i] % 2 == 0)
        {
            even++;
        }
        else if (ary[i] % 2 != 0)
        {
            odd++;
        }
    }
    // printf("%d\t%d",even,odd);
    if (odd == even)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
    return 0;
}