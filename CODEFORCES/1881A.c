#include <stdio.h>
#include <string.h>

void repeat();

int subS(const char *a, const char *b);

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
    int a, b;
    scanf("%d%d", &a, &b);
    // while (getchar() != '\n');
    getchar();
    // char aa[100];
    // char bb[100];

    char *aa = (char *)malloc(4000 * sizeof(char));
    char *bb = (char *)malloc(4000 * sizeof(char));

    if (aa == NULL || bb == NULL)
    {
        // Handle allocation error
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    gets(aa);
    gets(bb);

    int i;
    int d = 0;
    // char temp[400000];
    char *temp = (char *)malloc(4000 * sizeof(char));
    for (i = 0; i < 6; i++)
    {
        if (subS(aa, bb))
        {
            d = 1;
            break;
        }
        else
        {
            strcpy(temp, aa);
            strcat(aa, temp);
        }
    }
    if (d)
    {
        printf("%d\n", i);
    }
    else
        printf("-1\n");

    free(aa);
    free(bb);
    free(temp);
}

int subS(const char *a, const char *b)
{
    char *result = strstr(a, b);
    return (result != NULL);
}
