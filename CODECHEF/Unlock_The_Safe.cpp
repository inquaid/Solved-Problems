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
#define newl "\n"

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

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

#define yesif(flag) cout << ((flag) ? "Yes\n" : "No\n")
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define ff first
#define ss second

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

bool comp(pii &a, pii &b) { return a.ff > b.ff; }

int f(vector<pii> &v, int n, int k, vector<vector<int>> &dp) {
  if(k < 0) return 0;
  if(n == 0) return (k == 0);
  if(dp[n][k] != -1) return dp[n][k];

  int take_ff = f(v, n - 1, k - v[n - 1].ff, dp); 
  int take_ss = f(v, n - 1, k - v[n - 1].ss, dp);
  return dp[n][k] = take_ff + take_ss; 
}

int f2(int a, int b) {
  return a % 2 != b % 2 ;
}

void tTestCase(int t) {
  int n, k; cin >> n >> k;
  vi a(n), b(n); cin >> a >> b;
  int mn = 0, mx = 0;
  int sum = 0, ans = 9; 
  vector<pii> v;
  vi min_r;
  for (int i = 0; i < n; ++i) {
    mn = min(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
    mx = max(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
    v.push_back({mn, mx});
    sum += mn;
    min_r.push_back(mx - mn);
    ans = min(ans, mx - mn); 
  }
  if(sum > k) {
    no; return;
  }

  int need_extras = (k - sum) ;
  if(need_extras % 2 == 0 or need_extras >= ans ) {
    yes; return;
  }
  no;
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