#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    int ary[3];
    for (int i = 0; i <= 2; i++)
    {
        s("%d", &ary[i]);
    }
    int a = ary[0], b = ary[1], c = ary[2];

    int newary[10];
    newary[0] = a + b + c;
    newary[1] = (a + b) * c;
    newary[2] = a * (b + c);
    newary[3] = a * b * c;
    newary[4] = a + (b * c);
    newary[5] = (a * b) + c;

    int max = 0;
    for (int i = 0; i < 6; i++)
    {
        if (max < newary[i])
            max = newary[i];
    }
    p("%d", max);
    return 0;
}