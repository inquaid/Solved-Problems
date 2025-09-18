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
bool comp(vi &a, vi &b) { return a.back() < b.back(); }

map<int, vi> g;
int n; 

void bfs(int s) {

  queue<int> q;
  vector<bool> used(n + 1, 0);
  vi d(n + 1, 0), p(n + 1, 0);

  q.push(s);
  used[s] = 1;
  p[s] = 0;
  while(q.size()) {
    int u = q.front();
    q.pop();
    for(auto v : g[u]) {
      if(!used[v]) {
        used[v] = 1;
        q.push(v);
        d[v] = d[u] + 1;
        p[v] = u;
      }
    }
  }
  vector<vi> v;
  for (int i = 0; i <= n; ++i) {
    // print(i, p[i], d[i]);
    v.push_back({i, d[i]});
  }
  sort(all(v), comp);
  map<int, int> res;
  int cnt = n;
  for(auto i : v) {
    // print(i);
    if(i[0] == 0) continue;
    res[i[0]] = cnt; cnt--;
  }
  for (int i = 1; i <= n; ++i) {
    cout << res[i] << " ";
  } newl;
}

void tTestCase(int t) {
  cin >> n;
  g.clear();
  vi p(n + 1);
  // iota(all(p), 0);
  // print(ans);
  for (int i = 0; i < n - 1; ++i) {
    int u, v, x, y; cin >> u >> v >> x >> y;
    if(x > y) {
      g[u].push_back(v);
    } else if(y > x) {
      g[v].push_back(u);
    }
  }
  vi ind(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    for(auto j : g[i]) {
      ind[j]++;
    }
  }
  queue<int> q;
  for (int i = 1; i <= n; ++i) {
    if(ind[i] == 0) q.push(i);
  }
  vi tp;
  while(q.size()) {
    int u = q.front(); q.pop();
    tp.push_back(u);
    for(auto v : g[u]) {
      if(--ind[v] == 0) q.push(v);
    }
  }
  vi res(n + 1, 0);
  int cnt = n;
  for(auto u : tp) res[u] = cnt--;
  for (int i = 1; i <= n; ++i) {
    cout << res[i] << " ";
  } newl;
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