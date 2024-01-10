#include <bits/stdc++.h>
using namespace std;

#define flash                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int main()
{
  flash;
  int T;
  cin >> T;
  cin.ignore();
  string s;
  map<string, int> mp;
  while (T--)
  {
    cin >> s;
    mp[s]++;
    if (mp[s] > 1)
    {
      cout << "YES\n";
    }
    else
      cout << "NO\n";
  }
}