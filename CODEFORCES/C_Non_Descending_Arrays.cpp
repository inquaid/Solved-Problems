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

vi a, b, ans; 
int N;
const int M = 998244353;
vector<vi> dp;
int subset(int n, int s) {
  if(n == 0) {
    return 1;
  }
  if(dp[n][s] != -1) return dp[n][s] % M;
  int ai = 1e9, bi = 1e9;
  if(n < N) {
    ai = a[n]; bi = b[n];
  }
  int presAi = a[n-1], presBi = b[n-1];
  // print( presAi, presBi, ai, bi);
  // subset(n-1,0);
  if(s == 1) { // swapped
    swap(ai, bi);
  } 
  int res = 0;
  for (int cnt = 0; cnt < 2; ++cnt) {
    if(cnt) {
      swap(presAi, presBi);
    }
    if(presAi <= ai and presBi <= bi) {
      res += subset(n-1,cnt) % M;
    }
  }

  return dp[n][s] = res%M;
}

void f() {
  for (int n = 0; n <= N; ++n) {
    for (int s = 0; s < 2; ++s) {
      if(n == 0) {
        dp[n][s] = 1; continue;
      }
      int ai = 1e9, bi = 1e9;
      if(n < N) {
        ai = a[n]; bi = b[n];
      }
      int presAi = a[n-1], presBi = b[n-1];
      // print( presAi, presBi, ai, bi);
      // subset(n-1,0);
      if(s == 1) { // swapped
        swap(ai, bi);
      } 
      int res = 0;
      for (int cnt = 0; cnt < 2; ++cnt) {
        if(cnt) {
          swap(presAi, presBi);
        }
        if(presAi <= ai and presBi <= bi) {
          res += dp[n-1][cnt] % M;
        }
      }
      dp[n][s] = res%M; 
    }
  }
  print(dp[N][1]);
}

void tTestCase(int t) {
  int n; cin >> n; N = n;
  a.resize(n);
  b.resize(n);
  dp.assign(n + 1, vi(2, 0));
  // dp.assign(n + 1, -1);
  cin >> a >> b;
  f();
  // bug(a);
  // subset(n);
  // print(subset(n, 0));
}

void solve() {
  int t = 1; 
  cin >> t;
  for(int i = 1; i <= t; i++) {
    // cout << "Case " << i << ": ";
    tTestCase(i);
  }
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