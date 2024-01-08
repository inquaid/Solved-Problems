#include <stdio.h>
int main()
{

  for (int i = 1000; i > 0; i--)
  {
    printf("%d\t", i);
    if (i % 10 == 1 || i % 10 == 6)
    {
      printf("\n");
    }
  }
}