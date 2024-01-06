#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    a += 1;
    for (int i = 0;; i++)
    {
        int p = a % 10;
        int q = (a / 10) % 10;
        int r = (a / 100) % 10;
        int s = (a / 1000) % 10;

        if (p != q && q != r && r != s && s != p && q != s && p != r)
        {
            printf("%d", a);
            break;
        }
        else
            a += 1;
    }
    // printf("%d %d %d %d",p,q,r,s);
}