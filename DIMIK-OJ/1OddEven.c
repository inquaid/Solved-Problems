#include <stdio.h>
int main()
{
  int a, temp;
  scanf("%d", &a);
  while (a--)
  {
    scanf("%d", &temp);
    printf(temp % 2 == 0 ? "even\n" : "odd\n");
  }
}