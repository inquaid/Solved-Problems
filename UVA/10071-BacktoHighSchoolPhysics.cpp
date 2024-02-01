#include <stdio.h>

int main()
{

    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        // cout << abs(2 * a * b) << endl;
        printf("%d\n", (2 * a * b));
    }

    return 0;
}
