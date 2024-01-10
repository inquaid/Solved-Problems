#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

#define flash                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

signed main()
{
  flash;
  int T, a;
  cin >> T;
  map<int, int> mp;
  mp.clear();
  while (T--)
  {
    cin >> a;
    mp[a]++;
  }
  map<int, int>::iterator it;
  int max = 0;
  for (it = mp.begin(); it != mp.end(); it++)
  {
    if ((*it).second > max)
    {
      max = (*it).second;
    }
  }
  cout << max;
}