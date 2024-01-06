#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    getchar();
    int x = 0;
    char str[5];
    for (int i = 0; i < a; i++)
    {
        gets(str);
        if (!strcmp(str, "++X"))
        {
            ++x;
        }
        if (!strcmp(str, "X++"))
        {
            x++;
        }
        if (!strcmp(str, "--X"))
        {
            --x;
        }
        if (!strcmp(str, "X--"))
        {
            x--;
        }

        //  printf("%d",x);
    }
    printf("%d", x);
}