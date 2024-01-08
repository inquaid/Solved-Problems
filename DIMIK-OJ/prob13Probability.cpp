#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if (n == 1)
  {
    return n;
  }
  else
    return n * fact(n - 1);
}

int main()
{

  int a;
  cin >> a;
  cin.ignore();
  string s, word;
  unordered_map<string, int> mp;

  while (a--)
  {
    getline(cin, s);
    mp.clear();
    istringstream is(s);

    while (is >> word)
    {
      mp[word]++;
    }
    vector<int> ary;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
      ary.push_back((*it).second);
    }
    int size = ary.size(), devide = 1, cnt = 0;
    for (int i = 0; i < size; i++)
    {
      cnt += ary[i];
      // cout<<ary[i]<<" ";
      devide *= fact(ary[i]);
    }
    // int re=fact();
    cnt = fact(cnt);
    cout << "1/" << cnt / devide << endl;
  }
}