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

#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff first
#define ss second
bool comp(vi &a, vi &b) { return a.back() < b.back(); }

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

map<int, int> p, sz;

void make_set(int v) {
  p[v] = v; sz[v] = 1;
}

int find_set(int v) {
  if(v == p[v]) return v;
  return p[v] = find_set(p[v]);
}

void union_sets(int a, int b) {
  a = find_set(a), b = find_set(b);
  if(a != b) {
    if(sz[a] < sz[b]) swap(a, b);
    p[b] = a;
    sz[a] += sz[b];
  }
}

void tTestCase(int t) {
  p.clear(); sz.clear();
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> v;
  for (int i = 0; i < m; ++i) {
    int x, y, s; cin >> x >> y >> s; 
    // int cnt =  (s - k);
    // if(s > k) cnt = s - k;
    v.push_back({x, y, s});
  }
  sort(all(v), comp);

  for (int i = 1; i < n; ++i) {
    make_set(i);
  }

  int res = 0;
  // int res2 = 0;
  vi temp;
  for (int i = 0; i < m; ++i) {
    int x = v[i][0], y = v[i][1], s = abs(v[i][2]);
    // print(x, y, s);
    if(find_set(x) != find_set(y)) {
      union_sets(x, y);
      if(s > k) res += s - k;
    }
  }
  if(res == 0) {
    res = INT_MAX;
    for (int i = 0; i < m; ++i) {
      res = min(res, abs(v[i].back() - k));
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