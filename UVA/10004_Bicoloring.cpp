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

map<int, vi> g;

int f(int a, int b) {
  return (a&1) == (b&1);
}

void bfs(int n) {
  int strt = 1;
  queue<int> q;
  q.push(strt);
  vi vis(n + 1, 0), d(n), p(n);
  vis[strt] = 1;
  p[strt] = -1;
  d[strt] = 1;
  while(q.size()) {
    // print("OK");
    int u = q.front(); q.pop();
    // print(u);
    for(auto v : g[u]) {
      if(!vis[v]) {
        q.push(v);
        vis[v] = 1;
        d[v] = d[u] + 1;
        p[u] = v;
      }
    }
  }
  for (int u = 0; u <= n; ++u) {
    for(auto v : g[u]) {
      if(f(d[u], d[v])) {
        print("NOT BICOLORABLE."); return;
      }
    }
  }
  print("BICOLORABLE.");
  // for (int i = 0; i <= n; ++i) {
  //   print("Lvl: ",i, " ", d[i]);
  // }
  // bug(q.size());
}

void tTestCase(int n) {
   int m; cin >> m;
   g.clear();
   for (int i = 0; i < m; ++i) {
     int u, v;
     cin >> u >> v;
     g[u].push_back(v); g[v].push_back(u);
   }
   // for(auto [u, v] : g) {
   //  for(auto val : v) {
   //    print(u, val);
   //  }
   // } newl;
   bfs(n);
}

void solve() {
  int n; cin >> n;
  while(n) {
    tTestCase(n);

    cin >> n;
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