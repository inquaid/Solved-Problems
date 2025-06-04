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
vi vis, temp;
int n;

void dfs(int u) {
  vis[u] = 1;
  temp.push_back(u);
  bool flag = 0;
  for(auto v : g[u]) {
    if(!vis[v]) {
      dfs(v); flag = 1; break;
    }
  }
  if(!flag) return;
}

deque<int> bfs(int root) {
  deque<int> dq, res;
  vi visited(n + 1, 0);
  visited[root] = 1;
  dq.push_back(root);

  while(dq.size()) {
    int u = dq.front(); dq.pop_front();
    // cout << u << " ";
    res.push_back(u);

    for(auto v : g[u]) {
      if(!visited[v]) {
        visited[v] = 1;
        dq.push_back(v);
      }
    }
  }
  // newl;
  return res;
}

void tTestCase(int t) {
  g.clear();
  cin >> n;
  vi p(n); cin >> p;
  bug(p);
  int root = 0;
  vis.assign(n + 1, 0);
  temp.clear();
  for (int i = 0; i < n; ++i) {
    if(i + 1 == p[i]) {
      root = p[i]; continue;
    }
    g[i + 1].push_back(p[i]);
    g[p[i]].push_back(i + 1);
  }

  deque<int> lvl = bfs(root);
 
  vector<vi> paths;
  // dfs(root);
  // paths.push_back(temp);

  for (int i = 0; i < n; ++i) {
    // if(lvl[i] == root) continue;
    if(!vis[lvl[i]]) {
      temp.clear();
      dfs(lvl[i]);
      paths.push_back(temp);
    }
  }
  print(paths.size());
  for(auto i : paths) {
    print(i.size());
    print(i);
  }
  newl;
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