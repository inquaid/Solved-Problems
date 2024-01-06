#include <stdio.h>
void repeat()
{
    int a, i;
    scanf("%d", &a);
    for (i = 2; i < a + 1; i++)
    {
        printf("%d ", i);
    }
    printf("1");
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
        printf("\n");
    }
}