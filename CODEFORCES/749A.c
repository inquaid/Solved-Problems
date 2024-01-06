#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        b = a / 2;
        printf("%d \n", b);
        for (int i = 0; i < b; i++)
        {
            printf("2 ");
        }
    }
    else if (a % 2 != 0)
    {
        b = (a / 2) + 1;
        printf("%d \n", b - 1);
        printf("3 ");

        for (int i = 0; i < (b - 2); i++)
        {
            printf("2 ");
        }
    }
    return 0;
}