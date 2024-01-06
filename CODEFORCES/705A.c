#include <stdio.h>
void love(int a)
{
    printf("that I love ");
}

void hate(int a)
{
    printf("that I hate ");
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("I hate ");
    for (int i = 1; i < a; i++)
    {
        if (i % 2 != 0)
        {
            love(1);
        }
        else if (i % 2 == 0)
        {
            hate(1);
        }
    }

    printf("it");

    return 0;
}