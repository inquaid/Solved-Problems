#include <stdio.h>
int main()
{
    int p;
    scanf("%d", &p);

    for (int i = 0; i < p; i++)
    {

        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        if (a + b == c)
            printf("+\n");
        else if (a - b == c)
            printf("-\n");
    }
    return 0;
}