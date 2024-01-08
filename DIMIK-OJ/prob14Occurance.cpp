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
  char l;
  map<char, int> mp;
  while (T--)
  {
    mp.clear();
    getline(cin, s);
    for (char c : s)
    {
      mp[c]++;
    }
    cin >> l;
    if (mp[l] != 0)
    {
      cout << "Occurrence of '" << l << "' in '" << s << "' = " << mp[l] << endl;
    }

    else
      cout << "'" << l << "'"
           << " is not present\n";
    cin.ignore();
  }
}