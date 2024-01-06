#include <stdio.h>

int main()
{
int n;
    scanf("%d", &n);
    while (n--)
    {
    int a, odd = 0,even=0;
        odd=0,even=0;
        scanf("%d", &a);
        int ary[a];
      for(int i=0;i<a;i++) {
            scanf("%d", &ary[i]);
            if (ary[i] % 2 != 0)
            {
                odd++;
            }

            else { even++;}
          
        }
        if((a-odd)==0 || (a-even)==0) {printf("0\n");}
else         (odd<even)? printf("%d\n",odd) :  printf("%d\n",even);

    }
}