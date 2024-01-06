#include <stdio.h>
#include <string.h>
int main()
{
    int e;
    scanf("%d", &e);

    char str[e];
    getchar();
    gets(str);
    int p = strlen(str);
    int A = 0, D = 0;
    for (int i = 0; i < p; i++)
    {
        if (str[i] == 'A')
            A++;
        else if (str[i] == 'D')
            D++;
    }
    if (A == D)
        printf("Friendship");
    else if (A > D)
        printf("Anton");
    else
        printf("Danik");
}