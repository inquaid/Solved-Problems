#include <stdio.h>
#include <math.h>
void check()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    int ary2[a];

    int j = 2;
    for (int i = 0; i < a; i++)
    {
        {
            ary[i] = j;
        }

        j = j + j;
    }
    int b = a - 1;
    int c = (a / 2) - 1;
    int sum = ary[b];
    for (int i = 0; i < c; i++)
    {
        sum = sum + ary[i];

        // printf("%d %d\n", ary[i], ary[j]);
    }
    int sum1 = 0;
    for (int i = c; i < (a - 1); i++)
    {
        sum1 = sum1 + ary[i];
    }

    //  for(int i=0;i<(a-1);i++) {
    //     printf("%d ", ary[i]);
    //  }
    printf("%d ", abs(sum - sum1));
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
}