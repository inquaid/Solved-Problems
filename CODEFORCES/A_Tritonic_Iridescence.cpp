#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <math.h>
#include <climits>
#include <bitset>
#include <iomanip>
#include <numeric>
#include <chrono>

#define int long long
#define all(x) (x).begin(), (x).end()
#define newl cout << "\n"

using namespace std;

using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;
using vii = vector<pii>;
using ll = long long;
using lll = __int128;

template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p) {
  return is >> p.first >> p.second;
}

template <typename T> istream &operator>>(istream &is, vector<T> &v) {
  for (auto &elem : v)
    is >> elem;
  return is;
}

template <typename T, typename Y>
ostream &operator<<(ostream &os, const pair<T, Y> &p) {
  os << p.first << " " << p.second;
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
  for (size_t i = 0; i < v.size(); ++i) {
    os << v[i] << (i + 1 == v.size() ? "" : " ");
  }
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const set<T> &s) {
  auto it = s.begin();
  while (it != s.end()) {
    os << *it;
    if (++it != s.end())
      os << " ";
  }
  return os;
}

template <typename T>
ostream &operator<<(ostream &os, const unordered_set<T> &s) {
  bool first = true;
  for (const auto &elem : s) {
    if (!first)
      os << " ";
    os << elem;
    first = false;
  }
  return os;
}

template <typename T> void sort_unique(vector<T> &vec) {
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

template <class... T> void scan(T &...args) { (cin >> ... >> args); }

template <typename T> void print(const T &value) { cout << value << "\n"; }

template <typename T, typename... Args>
void print(const T &first, const Args &...rest) {
  cout << first;
  if constexpr (sizeof...(rest) > 0) {
    cout << " ";
    print(rest...);
  } else {
    cout << "\n";
  }
}

template <typename Container> void print_container(const Container &container) {
  cout << container << "\n";
}

#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff first
#define ss second

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

int ceil(int a,int b){ return (a+b-1)/b; }
bool comp(int a, int b) { return a > b; }

void tTestCase(int t) {
  int n;
  scan(n);
}

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  if(n == 1) {
    yesif(s[0] == '?'); 
    return;
  }
  int cnt = 0, temp = 0, c2 = 0;
  for (int i = 0; i < n - 1; ++i) {
    if(s[i] == s[i + 1] and s[i] != '?') {
      no; return;
    }
    bug(s[i]);
    if(s[i] == '?') {
      c2++;
      temp++;
    } else {
      cnt = max(cnt, temp); temp = 0;
    }
  }
  if(s.back() == '?') {c2++; temp++;}
  if(!c2) {
    no; return;
  }
  cnt = max(cnt, temp);
  // print(cnt);
  if(cnt > 1) {
    yes; return;
  }
  if(s[0] == '?' or s.back() == '?') {
    yes; return;
  }
  bool flag = 0;
  int c1 = 0; c2 = 0;
  set<pair<char, char>> st1, st2;
  for (int i = 1; i < n - 1; ++i) {
    if(s[i] == '?' and s[i - 1] == s[i + 1]) {
      // flag = 1;
      // no; return;
      // flag = 1;
      // st1.insert({min(s[i - 1], s[i + 1]), max(s[i - 1], s[i + 1])});
      // st1.insert(s[i - 1]);
      // st2.insert(s[i + 1]);
      c1++;
    } else if(s[i] == '?')
      c2++;

  }
  bug(c1, c2);
  yesif(c1 or !c2);
  // yesif(flag);
  // for(auto i: st1) print(i);
  // bug(st1.size(), st2.size());
  // yesif(st1.size() > 1 or st2.size() > 1);
  // yesif(!flag or c2 > 1);

  // yes;
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    // auto t1 = std::chrono::high_resolution_clock::now();

    solve();  // return 0;

    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cout << "    time: " << duration.count() << " ms" << endl;

  return 0;
}