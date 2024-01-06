#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 != 0)
        printf("-1");
    else
    {

        for (int i = 1; i < a; i += 2)
        {

            printf("%d ", i + 1);
            printf("%d ", i);
        }
    }
}