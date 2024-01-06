#include <stdio.h>
void check()
{
    int a;
    scanf("%d", &a); // limit of array
    int ary[a];
    int cck;
    scanf("%d", &cck); // the number which similar we want to check
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ary[i]);
        if (ary[i] == cck)
            count++;
    }

    if (count == 0)
    {
        printf("NO\n");
    }
    else if (count != 0)
    {
        printf("YES\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        check();
    }
    return 0;
}