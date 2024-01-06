#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    getchar();
    char str[a];
    gets(str);
    // for (int i = 0; i < 6; i++ )
    // {int temp=i;
    // printf(" %d ",temp);
    //     for (int k = 0; k < temp ; k++)
    //     {
    //         printf("%c",str[k]);
    //         i++;
    //     }

    // }
    int y = 0, strr = 1;
    while (y < a)
    {
        printf("%c", str[y]);
        strr++;
        y += strr;
        // strr=y;
    }
}
