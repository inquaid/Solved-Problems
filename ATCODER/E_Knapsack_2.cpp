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

vi wt, val;
int n, w;
vector<vi> dp;
const int inf = 1e12;

int f(int n, int sum) {
  if(n == 0) {
    if(sum == 0) return 0;
    return inf;
  }
  if(dp[n][sum] != -1) return dp[n][sum];
  int take = inf, noTake = f(n - 1, sum);
  if(sum >= val[n - 1]) {
    take = wt[n - 1] + f(n-1, sum - val[n - 1]);
  }
  return dp[n][sum] = min(take, noTake);
}

void f2(int N, int Sum) {
  dp[0][0] = 0;
  for (int n = 1; n <= N; ++n) {
    for (int sum = 0; sum <= Sum; ++sum) {
      int take = wt[n - 1] + dp[n-1][sum - val[n - 1]] , noTake = dp[n - 1][sum];
      dp[n][sum] = min(take, noTake);
    }
  } //return dp[N][Sum];
}

void solve() {
  cin >> n >> w;
  dp.assign(n + 1, vi(((n + 1) * 1000) + 5, inf));
  wt.resize(n); val.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> wt[i] >> val[i];
  }
  int ans = 0;
  f2(n, (n + 1) * 1000);
  for (int i = 0; i <= (n * 1000); ++i) {
    if(dp[n][i] <= w) ans = i;
  }
  print(ans);
  // print(f(n, w));
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