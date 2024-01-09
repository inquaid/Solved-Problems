#include <stdio.h>
int main()
{
    int ary[100];
    int cnt = 0;
    for (int i = 0;; i++)
    {
        scanf("%d", &ary[i]);
        cnt++;
        if (ary[i] == 42)
            break;
    }

    for (int i = 0; i < (cnt - 1); i++)
    {

        printf("%d\n", ary[i]);
    }
    return 0;
}