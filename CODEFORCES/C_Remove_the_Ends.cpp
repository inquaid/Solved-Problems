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

#define int long long
#define all(x) (x).begin(), (x).end()
#define newl cout << "\n"

using namespace std;

using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;
using vii = vector<pii>;

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
  int n; cin >> n;
  vi a(n); cin >> a;

  int i = 0, val = 0;
  bool flag = (a[0] < 0);
  vi b;
  while(i < n) {
    val = 0;
    while(i < n and a[i] < 0) {
      val += abs(a[i++]);
    }
    if(val)
      b.push_back(-val);
    val = 0;
    while(i < n and a[i] > 0) {
      val += a[i++];
    }
    if(val)
      b.push_back(val);
  }
  bug(b);
  int sum = 0, res = 0, m = b.size();
  vi pref(m + 1, 0), suff(m + 1, 0);

  for (int i = 0; i < m; ++i) {
    if(b[i] > 0)
      pref[i + 1] = pref[i] + b[i];
    else pref[i + 1] = pref[i];
  }
  for (int i = m - 1; i >= 0; --i) {
    if(b[i] < 0) 
      suff[i] = suff[i + 1] + abs(b[i]);
    else suff[i] = suff[i + 1];
  }
  bug(pref);
  bug(suff);

  for (int i = m - 1; i >= 0; --i) {
    if(b[i] < 0) {
      sum += abs(b[i]);
      res = max(res, sum);
    } else {
      res = max(res, pref[i] + sum);
    }
  }
  sum = 0;
  for (int i = 0; i < m; ++i) {
    if(b[i] > 0) {
      sum += b[i];
      res = max(res, sum);
    } else {
      res = max(res, suff[i] + sum);
    }
  }
  print(res);
}

void solve() {
  int t; cin >> t;
  for(int i = 1; i <= t; i++) {
    tTestCase(i);
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

  solve();

  return 0;
}