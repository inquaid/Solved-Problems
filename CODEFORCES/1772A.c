#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int p, q;
        scanf("%d%d", &p, &q);
        printf("%d\n", p + q);
    }
    return 0;
}