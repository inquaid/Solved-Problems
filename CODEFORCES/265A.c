#include <stdio.h>
#include <string.h>
int main()
{
  char str[111], str2[111];
  gets(str);
  gets(str2);
  int cnt = 1;
  for (int i = 0, j = 0; i < strlen(str2); i++)
  {
    if (str[j] == str2[i])
    {
      j++;
      cnt++;
    }
  }
  printf("%d", cnt);
}