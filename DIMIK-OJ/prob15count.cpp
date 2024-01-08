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
    cin >> s;
    for (char c : s)
    {
      mp[c]++;
    }

    map<char, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
      cout << (*it).first << " = " << (*it).second << endl;
    }
    cout << endl;
    cin.ignore();
  }
}