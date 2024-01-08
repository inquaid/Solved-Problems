#include <stdio.h>
#include <math.h>
int main()
{
  int n, temp;
  scanf("%d", &n);
  for (int k = 1; k <= n; k++)
  {
    printf("Case %d: ", k);
    scanf("%d", &temp);
    for (int i = 1; i <= temp / 2; i++)
    {
      if (temp % i == 0)
      {
        printf("%d ", i);
      }
    }
    printf("%d\n", temp);
  }
}