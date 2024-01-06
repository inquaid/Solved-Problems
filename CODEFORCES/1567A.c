#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        getchar();
        char *str = (char *)malloc(1000 * sizeof(char));
        gets(str);
        for (int i = 0; i < a; i++)
        {
            if (str[i] == 'U')
            {
                str[i] = 'D';
            }
            else if (str[i] == 'D')
            {
                str[i] = 'U';
            }

            printf("%c", str[i]);
        }
        free(str);
        printf("\n");
    }
}