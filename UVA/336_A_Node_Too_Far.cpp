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

void tTestCase(int t) {
  int n;
  scan(n);
}
set<int> nodes;
map<int, vi> g;
int bfs(int s, int ttl, int n) {
// print("OKOKO");
 queue<int> q;
 // n = 2147483650;
 // int n = 100;
 // vi used(n + 1, 0), d(n + 1, 0), p(n + 1, 0); 
 map<int, int> used, d, p;
 used[s] = 1;
 p[s] = -1;
 q.push(s);
 while(q.size()) {
  int u = q.front(); q.pop();
  for(auto v : g[u]) {
    if(!used[v]) {
      used[v] = 1;
      q.push(v);
      d[v] = d[u] + 1;
      p[v] = u;
    }
  }
 }
 // print(d)
 int cnt = 0;
 for(auto i : nodes) {
  if(i == s) continue;
  if(d[i] > ttl or !used[i]) cnt++;
 }
 // for (int i = 0; i < nodes.size(); ++i) {
 //  if(nodes[i] == s) continue;
 //  if(d[nodes[i]] > ttl or !used[nodes[i]]) cnt++;
 //  // if(d[i] > ttl ) cnt++;
 //    // print(i, d[i]);
 //  // else print(i, -1);
 // }
 return cnt;
}

void solve() {
  int n, cnt = 1;
  cin >> n;
  while(n) {
    g.clear(); nodes.clear();
    int mx = 0;
    for (int i = 0; i < n; ++i) {
      int u, v; cin >> u >> v;
      g[u].push_back(v); g[v].push_back(u);
      mx = max(mx, max(u, v)); 
      nodes.insert(u);
      nodes.insert(v);
      // cout << u << " " << v << "  ";
      // print(u, v);
    }
    // newl;
    int node, ttl; 
    // int cnt = 6;
    while(1) {
      // cnt--;
      cin >> node >> ttl;
      // cout << node << " " << ttl << "  ";
      if(node == 0 and ttl == 0) break;
      
      // print(node, ttl);

      int node_not_reached = bfs(node, ttl, mx + 1);

      cout << "Case " << cnt++ << ": " << node_not_reached << " nodes not reachable from node " << node << " with TTL = " << ttl << ".\n";
      // cin >> node >> ttl;
    }
    // newl;
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

    solve();  return 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      int u, v; cin >> u >> v;
      g[u].push_back(v); g[v].push_back(u);
    }
    // bfs(1);
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}