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
bool comp(vi &a, vi &b) { return a.back() > b.back(); }

void tTestCase(int t) {
  int n;
  scan(n);
}

int f(vi &a, map<int, int> &mp, int n, vi &dp) {
  if(n <= 0) return 0;
  if(n == 1) return a[0] * mp[a[0]];
  if(dp[n]) return dp[n];
  // bug(a[n- 1].ff, a[n-1].ss);
  if(a[n - 1] - 1 == a[n - 2])
    return dp[n] = max(f(a, mp, n - 1, dp), f(a, mp, n - 2, dp) + (a[n - 1] * mp[a[n - 1]]));
  else return dp[n] = f(a, mp, n - 1, dp) + (a[n - 1] * mp[a[n - 1]]);
}

void solve() {
  int n; cin >> n;
  // vector<vector<int>> a;
  vi a;
  // vi vis(1e5 + 5, 0);
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int temp; cin >> temp; mp[temp]++;

  }
  for(auto i : mp) {
    a.push_back(i.ff);
  }
  vi dp(a.size() + 1, 0);
  dp[1] = a[0] * mp[a[0]];
  for (int n = 2; n <= a.size(); n++) {
    if(a[n - 1] - 1 == a[n - 2]) 
      dp[n] = max(dp[n - 1], dp[n - 2] + (a[n - 1] * mp[a[n - 1]]));
    else dp[n] = dp[n - 1] + (a[n - 1] * mp[a[n - 1]]);
  }
  // bug(dp);
  // bug(dp[a.size()]);
  // bug(dp[a.size() - 1]);
  print(dp.back());
  // print(dp[a.size()]);
  // print(f(a, mp, a.size() , dp));
  mp.clear();
  dp.clear();
  a.clear();
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