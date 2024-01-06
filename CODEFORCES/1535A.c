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
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int temp = a, temp2 = c;
    a = (a > b) ? a : b;
    b = (a > b) ? b : temp;
    c = (c > d) ? c : d;
    d = (c > d) ? d : temp2;
    // printf("%d %d %d %d",a,b,c,d);

    if (a > d && c > b)
        printf("YES\n");
    else
        printf("NO\n");
}