#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    float ary[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%f", &ary[i]);
    }

    float sum = 0.0;
    for (int i = 0; i < a; i++)
    {
        sum += ary[i];
    }

    float num = (int)a;

    float avg = sum / num;

    printf("%f", avg);
}