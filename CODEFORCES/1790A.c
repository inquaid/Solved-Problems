#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void repeat();

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

void repeat()
{
    int arynn[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5, 0, 2, 8, 8, 4, 1, 9, 7};

    char a[50];
    gets(a);
    int n = strlen(a);
    int ary[n];

    for (int i = 0; i < n; i++)
    {
        ary[i] = a[i] - '0';
    }
    int i;
    for (i = 0;; i++)
    {
        if (ary[i] != arynn[i])
            break;
    }

    printf("%d\n", i);
}