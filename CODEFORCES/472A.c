#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = a / 2;
    int c = a - b;
    for (int i = 0; i < a; i++)
    {
        if ((b % 2 == 0 || b % 3 == 0 || b % 5 == 0 || b % 7 == 0) && (c % 2 == 0 || c % 3 == 0 || c % 5 == 0 || c % 7 == 0) && (b != 3 && b != 5 && b != 7) && (c != 3 && c != 5 && c != 7))
        {
            printf("%d %d", b, c);
            break;
        }
        else
        {
            b = b - 1;
            c = c + 1;
        }
    }
}