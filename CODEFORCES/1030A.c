#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int ary[a];
    int easy = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
        if (ary[i] == 1)
        {
            easy = 1;
        }
    }
    if (easy == 0)
        printf("EASY");
    else
        printf("HARD");
    return 0;
}