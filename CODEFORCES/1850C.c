#include <stdio.h>
#include <string.h>

void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}

void repeat()
{
    char str[100];
    int k = 0;
    for (int i = 0; i < 8; i++)
    {
        char temp[10];
        gets(temp);
        for (int j = 0; j < strlen(temp); j++)
        {
            if (temp[j] != '.')
            {
                str[k] = temp[j];
                k++;
                break;
            }
        }
    }
    str[k] = '\0';
    puts(str);
    printf("\n");
}
