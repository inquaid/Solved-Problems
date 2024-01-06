#include <stdio.h>
#include <string.h>
#include <math.h>
void check()
{
    int a;
    int i;
    scanf("%d", &a);
    char ary[a];
    for (i = 0; i < a; i++)
    {
        scanf(" %c", &ary[i]);
    }
    ary[a] = '\0';
    // for(int i=0;i<(a);i++) {
    //     printf("%c", ary[i]);
    // }
    int count = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < (a); j++)
        {
            if (i != j && ary[i] == ary[j])
            {
                count++;
                break;
            }
        }
    }
    // printf("\t%d",count);
    if (a == 1)
    {
        printf("2\n");
    }
    else
    {
        int e = 2 * (a - count);
        int f = count;
        printf("%d\n", e + f);
    }
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