#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    while (n--)
    {

        int a;
        scanf("%d", &a);
        int n = 1 + ((a - 1) / 2);
        printf("%d\n", n);
    }
}