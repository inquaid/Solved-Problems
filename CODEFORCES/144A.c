#include <stdio.h>

int binarySrch()
{
}

int main()
{
    int a, i = 0, max = 0;
    scanf("%d", &a);
    int ary[a];
    int min, temp = a, temp1 = a, jojo = a;
    while (a--)
    {
        scanf("%d", &ary[i]);
        if (i == 0)
            min = ary[i];
        else
        {
            if (min > ary[i])
                min = ary[i];
        }
        if (ary[i] > max)
        {
            max = ary[i];
        }

        i++;
    }
    // printf("%d %d ",max,min);
    int g, f, k = 0, l = 0;
    while (temp--)
    {
        if (ary[k] == max)
        {
            g = k;
            break;
        }
        k++;
    }
    while (temp1--)
    {
        if (ary[temp1] == min)
        {
            f = temp1;
            break;
        }
        // printf(" %d ",ary[temp1]);
    }
    // printf("%d %d",g,f);
    (g > f) ? printf("%d", g + (jojo - f) - 2) : printf("%d", g + (jojo - f) - 1);
}