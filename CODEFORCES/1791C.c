#include <stdio.h>
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
    return 0;
}

void repeat()
{
    int a, sum = 0;
    char k[2010];
    scanf("%d", &a);
    getchar();
    gets(k);
    long long int ary[a];
    for (int i = 0; i < a; i++)
    {
        ary[i] = k[i] - '0';
    }
    for (int i = 0, j = a - 1;; i++, j--)
    {
        if (ary[i] == 1 && ary[j] == 0)
        {
            sum += 2;
        }
        else if (ary[i] == 0 && ary[j] == 1)
        {
            sum += 2;
        }
        else
            break;
    }

    if (sum == (2 * a))
    {
        printf("0\n");
    }
    else
        printf("%d\n", a - sum);
}