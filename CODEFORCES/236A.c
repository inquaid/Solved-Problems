#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int n = strlen(str);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                sum++;
                break;
            }
        }
    }
    int k = n - sum;
    if (k % 2 == 0)
        printf("CHAT WITH HER!");
    else if (k % 2 != 0)
        printf("IGNORE HIM!");
}