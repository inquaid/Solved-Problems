#include <stdio.h>
int main()
{
  int n, temp;
  scanf("%d", &n);
  while (n--)
  {
    scanf("%d", &temp);
    for (int i = 0; i < temp; i++)
    {
      for (int j = 0; j < temp; j++)
      {
        printf("*");
      }
      printf("\n");
    }

    printf("\n");
  }
}