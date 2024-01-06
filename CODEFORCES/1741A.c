#include <stdio.h>
#include <string.h>
int main()
{

    long long int n;
    scanf("%lld", &n);
    getchar();
    while (n--)
    {
        char a[1222], b[1222];
        scanf("%s%s", &a, &b);
        int l = strlen(a) - 1, ll = strlen(b) - 1;

        int j = strcmp(a, b);
        if (j == 0)
            printf("=\n");

        else if (a[l] == b[ll])
        {
            if (a[l] == 'L')
            {
                (l > ll) ? printf(">\n") : printf("<\n");
            }
            else if (a[l] == 'S')
            {
                (l < ll) ? printf(">\n") : printf("<\n");
            }
        }

        else
        {
            int r = 0, s = 0;
            if (l == ll)
            {

                if (a[l] == 'L')
                {
                    r++;
                }
                if (a[l] == 'S')
                {
                    r--;
                }
                if (b[ll] == 'L')
                {
                    s++;
                }
                if (b[ll] == 'S')
                {
                    s--;
                }
            }

            if (a[l] == 'L')
            {
                r++;
            }
            if (a[l] == 'S')
            {
                r--;
            }

            if (b[ll] == 'L')
            {
                s++;
            }
            if (b[ll] == 'S')
            {
                s--;
            }

            (r > s) ? printf(">\n") : printf("<\n");
        }
    }
}