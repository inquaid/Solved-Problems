#include <stdio.h>
void check()
{
    int a;
    scanf("%d", &a);
    a = a - 1;
    int ary[a];
    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
        sum += ary[i];
    }
    printf("%d\n", -sum);
}
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
}