#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {

        int a;
        scanf("%d", &a);
        int ary[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &ary[i]);
        }
        if ((ary[a - 1]) == 0)
        {
            printf("NO\n");
        }
        else if ((ary[ary[a - 1] - 1]) == 0)
        {
            printf("NO\n");
        }
        //  else if((ary[ary[ary[a-1] - 1]-1])==0){
        //      printf("NO\n");

        //  }
        else
            printf("YES\n");
    }
}