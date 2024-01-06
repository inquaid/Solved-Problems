#include <stdio.h>
int main()
{
    char aryF[210];
    int j = 0, k;
    char ary[210];
    int i;
    for (i = 0;; i++)
    {
        k = i;
        scanf("%c", &ary[i]);
        if (ary[i] == '\n')
            break;
    }

    for (int p = 0; p <= k; p++)
    {
        // printf("%d",i);
        if (ary[p] == 'W' && ary[p + 1] == 'U' && ary[p + 2] == 'B')
        {
            if (j > 0 && aryF[j - 1] != ' ')
            {
                aryF[j] = ' '; // Add a space if it's not already there
                j++;
            }
            p += 2;
        }

        else
        {
            aryF[j] = ary[p];
            j++;
        }
    }
    aryF[j] = '\0';

    for (int i = 0;; i++)
    {
        if (aryF[i] == '\0')
            break;
        printf("%c", aryF[i]);
    }
}