#include <stdio.h>
int fun5(int a)
{
  a = a / 5;
  return a;
}

int fun4(int a)
{
  if (a % 5 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  int a;
  scanf("%d", &a);
  printf("%d", fun5(a) + fun4(a));

  return 0;
}