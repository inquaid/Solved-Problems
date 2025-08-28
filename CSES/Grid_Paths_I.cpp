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

#define yes cout << "Yes\n"
#define no cout << "No\n"
#define yesif(flag) ((flag) ? yes : no)
#define ff first
#define ss second

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

int ceil(int a,int b){ return (a+b-1)/b; }
bool comp(int a, int b) { return a > b; }

vector<string> vs;
vector<vi> dp;
const int M = 1e9 + 7;

int f(int n, int m) {
  // bug(n, m);
  if(n == 1 and m == 1) {
    // if(n == 0 and m == 0) return 1;
    return vs[0][0] == '.';
  }
  if(dp[n][m] != -1) return dp[n][m];
  if(n == 1) {
    if(vs[n - 1][m - 2] != '*')
      return f(n, m - 1);
    return 0;
  }
  
  if(m == 1) {
    if(vs[n - 2][m - 1] != '*')
      return f(n - 1, m);
    return 0;
  }
  int res = 0;
  if(vs[n - 1][m - 2] != '*')
    res += f(n, m - 1) ;
  if(vs[n - 2][m - 1] != '*')
    res += f(n - 1, m) ;
    // return f(n - 1, m) + f(n, m - 1);
  // res = res ;
  // bug(res, res );
  dp[n][m] = res % M;
  return dp[n][m];
}

void solve() {
  int n; cin >> n;
  dp.assign(n + 1, vi(n + 1, -1));
  vs.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> vs[i];
  }
  if(vs[n - 1][n - 1] == '*') {
    print(0); return;
  }
  // bug(m);
  print(f(n, n) % M);
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
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}