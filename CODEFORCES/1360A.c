#include <stdio.h>
int check(int a, int b)
{
    int temp = a, temp2 = b;
    a = (a > b) ? a : temp2;
    b = (b < a) ? b : temp;
    //
    // printf("%d %d",a,b);

    int c = (a > (2 * b)) ? a : (2 * b);
    return (c * c);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    while (i < n)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", check(a, b));
        i++;
    }

    return 0;
}