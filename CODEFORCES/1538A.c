#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int check(int *ary, int size, int max, int min);

int check2(int *ary, int size, int max, int min);

int check3(int *ary, int size, int max, int min);

void repeat(void);

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}
void repeat(void)
{

    int temp = 0, temp1 = 0;

    int a, i = 0, max = 0, minP = 0, maxP = 0;
    scanf("%d", &a);
    int aa = a, aaa = a;
    int ary[a];
    int min = 0;
    while (a--)
    {
        scanf("%d", &ary[i]);
        if (i == 0)
        {
            min = ary[0];
        }
        else
        {
            if (min > ary[i])
            {
                min = ary[i];
                minP = i;
            }
        }
        if (ary[i] > max)
        {
            max = ary[i];
            maxP = i;
        }
        i++;
    }
    int result = check(ary, aa, max, min);
    int result2 = check2(ary, aa, max, min);
    int result3 = check3(ary, aa, max, min);

    result = (result < result2) ? result : result2;
    result = (result < result3) ? result : result3;

    printf("%d \n ", result);
}

int check(int *ary, int size, int max, int min)
{
    int result = 0, cont = 0, ki = 0, stable = 1, stable2 = 1;

    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        if (stable)
        {
            if (ary[i] == max || ary[i] == min)
            {
                cont++;
                stable = 0;
            }
            ki++;
        }
        if (cont == 2)
        {
            return ki;
        }
        if (stable2)
        {
            if (ary[j] == max || ary[j] == min)
            {
                cont++;
                stable2 = 0;
            }
            ki++;
        }
        if (cont == 2)
        {
            return ki;
        }
    }
}

int check2(int *ary, int size, int max, int min)
{
    int cnt = 0, fuu = 0;
    // printf(" %d %d\n\n",max,min);

    for (int i = 0; i < size; i++)
    {
        // printf("%d ",ary[i]);
        if (ary[i] == max)
        {
            cnt++;
        }
        if (ary[i] == min)
        {
            cnt++;
        }
        if (cnt == 2)
        {
            return i + 1;
        }
    }
}

int check3(int *ary, int size, int max, int min)
{
    int suu = 0, l = 0;
    int cnt = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        // printf("%d ",ary[i]);
        if (ary[i] == max)
        {
            cnt++;
        }
        if (ary[i] == min)
        {
            cnt++;
        }
        if (cnt == 2)
        {
            return l + 1;
        }
        l++;
    }
}