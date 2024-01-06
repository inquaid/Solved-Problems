#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, result = 0;
    scanf("%d", &a);
    getchar();
    char b[6000];
    char c[6000];
    gets(b);
    gets(c);

    int ary[a], arr[a];
    for (int i = 0; i < a; i++)
    {
        ary[i] = b[i];
        arr[i] = c[i];
    }
    for (int i = 0; i < a; i++)
    {
        // printf("%d ", ary[i]);
    }

    for (int i = 0; i < a; i++)
    {
        int temp = abs(ary[i] - arr[i]);
        int temp2 = abs(ary[i] - arr[i] - 10);
        int temp3 = abs(ary[i] - arr[i] + 10);

        result += (temp < temp2) ? (temp < temp3) ? temp : temp3 : (temp2 < temp3) ? temp2
                                                                                   : temp3;
    }
    printf("%d", result);
}