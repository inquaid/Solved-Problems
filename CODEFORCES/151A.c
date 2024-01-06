#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    // printf("%d %d %d %d %d %d %d %d",n,k,l,c,d,p,nl,np);
    l = k * l;
    d = c * d;
    int drinkPp = l / nl;
    int saltPp = p / np;
    int small = (drinkPp < saltPp) ? drinkPp : saltPp;
    // printf("%d",saltPp);
    // int limePp= d/
    // int limePp=d;
    int smallest = (small < d) ? small : d;

    printf("%d", smallest / n);
}