#include <stdio.h>
#include <math.h>
#define fst printf("First\n")
#define snd printf("Second\n")
int main()
{
    int p;
    scanf("%d", &p);
    while (p--)
    {

        long long int a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);

        if (c % 2 != 0)
        {
            a++;
        }
        (a > b) ? fst : snd;
    }
}