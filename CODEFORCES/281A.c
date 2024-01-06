#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a = pow(10, 3);
    char str[a];
    fgets(str, a, stdin);
    if (str[0] > 90)
        str[0] = str[0] - 32;
    printf("%s", str);
}