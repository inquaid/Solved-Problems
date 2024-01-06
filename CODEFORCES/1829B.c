#include <stdio.h>

void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}

void repeat()
{
    int a, count = 0, max = 0;
    scanf("%d", &a);
    int temp;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &temp);
        if (temp == 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > max)
        {
            max = count;
        }
    }
    printf("\t%d\n", max);
}