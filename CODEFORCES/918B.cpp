#include <bits/stdc++.h>
using namespace std;

#define flash                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int main()
{
  flash;
  int T, m;
  cin >> T >> m;

  string a, b;
  map<string, string> mp;
  mp.clear();
  while (T--)
  {

    cin >> a >> b;

    mp[b] = a;
  }
  while (m--)
  {
    cin >> a >> b;
    b.erase(b.size() - 1);
    // map<string,string>::iterator it;
    cout << a << " " << b << "; #" << mp[b] << endl;
  }
}