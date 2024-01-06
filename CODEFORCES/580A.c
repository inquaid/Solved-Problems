#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int ary[a];
    int i = 0;
    while (i < a)
    {
        scanf("%d", &ary[i]);
        i++;
    }
    int cntary[a];
    int max = 0;
    int cnt = 1;
    for (int k = 0; k < a - 1; k++)
    {
        // cnt=0;
        // for(int j=k;j<a;j++) {
        if (ary[k] <= ary[k + 1])
            cnt++;

        else
        {
            if (max < cnt)
            {
                max = cnt;
            }
            cnt = 1;
        }
        // }

        // printf("%d ", cnt);
        // if(max<cnt) max=cnt;
    }
    int g = (cnt > max) ? cnt : max;
    printf("%d ", g);
}