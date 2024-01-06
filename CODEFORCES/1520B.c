#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void repeat(void);

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
void repeat(void)
{

    char str[15000], same[15000], frst[5];
    gets(str);
    frst[0] = str[0];
    // memset(same,str[0],strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        same[i] = str[0];
    }
    same[strlen(str)] = '\0';

    // puts(str);
    // puts(same);
    int n = atol(str);
    int s = atol(same);
    // printf("%lld \n%lld\n",n,s);
    int xx = (strlen(str) - 1) * 9;
    int yy = atol(frst);
    // printf("%lld %lld ",xx,yy);
    if (n < s)
    {
        printf("%ld\n", xx + yy - 1);
    }
    else
        printf("%ld\n", xx + yy);
}