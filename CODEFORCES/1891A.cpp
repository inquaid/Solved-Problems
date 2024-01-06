#include <stdio.h>
#include <stdbool.h>

int main()
{
  int p;
  scanf("%d", &p);
  while (p--)
  {
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &ary[i]);
    bool flag = true;
    int cnt = 0;
    for (int i = 1; i <= n;)
    {
      int val = 1 << cnt;
      int v[val];
      int j = 0;
      while (i <= val && i <= n)
      {
        v[j++] = ary[i - 1];
        i++;
      }
      for (int k = 1; k < j; k++)
      {
        if (v[k] < v[k - 1])
        {
          flag = false;
          break;
        }
      }
      cnt++;
    }
    if (flag)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}