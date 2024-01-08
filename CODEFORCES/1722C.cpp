#include <bits/stdc++.h>
using namespace std;

int check(string one, string two, string three)
{
  // cout<<one<<endl<<two<<endl<<three<<endl;
  map<string, int> mp;
  mp.clear();
  istringstream is(one);
  string word;
  while (is >> word)
  {
    mp[word]++;
  }
  istringstream iss(two);
  while (iss >> word)
  {
    mp[word]++;
  }
  istringstream isss(three);
  while (isss >> word)
  {
    mp[word]++;
  }

  map<string, int>::iterator it;
  int cnt = 0;
  for (it = mp.begin(); it != mp.end(); it++)
  {
    // cout<<(*it).first<<" "<<(*it).second<<endl;
    if ((*it).second == 3)
    {
      cnt++;
    }
  }

  return 3 * cnt;
}

int check(string one, string two, int minus)
{
  // cout<<one<<endl<<two<<endl<<three<<endl;
  map<string, int> mp;
  mp.clear();
  istringstream is(one);
  string word;
  while (is >> word)
  {
    mp[word]++;
  }
  istringstream iss(two);
  while (iss >> word)
  {
    mp[word]++;
  }

  map<string, int>::iterator it;
  int cnt = 0;
  for (it = mp.begin(); it != mp.end(); it++)
  {
    // cout<<(*it).first<<" "<<(*it).second<<endl;
    if ((*it).second == 2)
    {
      cnt++;
    }
  }
  cnt -= (minus / 3);
  return 2 * cnt;
}

int main()
{

  int T, size;
  cin >> T;
  while (T--)
  {
    cin >> size;
    size *= 3;
    cin.ignore();
    string one, two, three;
    getline(cin, one);
    getline(cin, two);
    getline(cin, three);
    int minus = check(one, two, three);
    size -= minus;
    // cout<<check(one,two,minus)<<endl;
    cout << size - check(one, two, minus) - check(one, three, minus) << " " << size - check(one, two, minus) - check(two, three, minus) << " " << size - check(one, three, minus) - check(two, three, minus) << endl;
  }
}