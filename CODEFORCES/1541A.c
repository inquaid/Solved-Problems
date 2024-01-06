#include <stdio.h>
int main()
{
    int a, n;

    scanf("%d", &n);
    while (n--)
    {

        scanf("%d", &a);
        if (a % 2 == 0)
        {
            for (int i = 1; i < a; i++)
            {
                printf("%d %d ", i + 1, i);
                i++;
            }
        }

        else
        {
            printf("3 1 2 ");
            for (int i = 4; i < a; i++)
            {
                printf("%d %d ", i + 1, i);
                i++;
            }
        }
        printf("\n");
    }
}