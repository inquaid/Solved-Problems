#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char s[1212];
    bool first = true;

    while (gets(s))
    {
        int size = strlen(s);
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '"')
            {
                if (first)
                {
                    printf("``");
                    first = false;
                }
                else
                {
                    printf("''");
                    first = true;
                }
            }
            else
                printf("%c", s[i]);
        }
        printf("\n");
    }
}