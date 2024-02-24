#include <stdio.h>
#include <stdbool.h>
#include<string.h>
bool FindInFile(char *name)
{
    FILE *fp;
    fp = fopen("Email&pW.txt", "r");
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = 0;
        if (!strcmp(buffer, name))
        {
            fclose(fp);
            return true;
        }
    }
    return false;
}

int filee()
{
  // a function to add a account to the file;
  printf("Created");
}

void print()
{

    FILE *file;
    file = fopen("Email&pW.txt", "w");
    fputs("Apple", file);
    fprintf(file, "\nball");
    fclose(file);

    file = fopen("Email&pW.txt", "r");

    printf("Enter name: ");
    char name[50];
    gets(name);
    if (FindInFile(name))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
        bool want;
        printf("want to register ?\nIf yes press Y else N: ");
        char c;
        scanf("%c", &c);
        want = (c == 'Y') ? true : false;
        if (want)
        {
            filee();
        }
        else
        {
            printf("FAKK offf");
        }
    }
}