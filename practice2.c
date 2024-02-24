#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ary[] = {1, 2, 3, 5, 10, 10};
    int n = sizeof(ary) / sizeof(int);
    // printf("%d",n);
    int mn;
    for (int i = 0; i < n; i++)
    {
        mn = ary[i];
        for (int k = i + 1; k < n; k++)
        {
            if (ary[k] < mn)
            {
                int temp = ary[k];
                ary[k] = ary[i];
                ary[i] = temp;
                mn = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ary[i]);
    }
    
}
