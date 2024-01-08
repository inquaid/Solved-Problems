#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int a, temp, size;
  char tmp[122];
  scanf("%d", &a);
  while (a--)
  {
    scanf("%s", tmp);
    temp = tmp[strlen(tmp) - 1] - '0';
    printf(temp % 2 == 0 ? "even\n" : "odd\n");
  }
}