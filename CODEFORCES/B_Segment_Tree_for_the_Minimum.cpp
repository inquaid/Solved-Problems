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

int ceil(int a,int b){ return (a+b-1)/b; }
bool comp(int a, int b) { return a > b; }

const int MAXN = 1e6 + 8;
int n, t[4 * MAXN];

int cmp(int a, int b) {
  // return a + b;
  // if(a == 0) return b;
  // if(b == 0) return a;
  return min(a, b);
}

void build(vi &a, int v, int tl, int tr) {
  if(tl == tr) {
    t[v] = a[tl]; 
  } else {
    int tm = (tl + tr) / 2;
    build(a, v * 2, tl, tm);
    build(a, v * 2 + 1, tm + 1, tr);
    // t[v] = (t[v * 2] + t[v * 2 + 1]);
    t[v] = cmp(t[v * 2], t[v * 2 + 1]);
  }
}

int sum(int v, int tl, int tr, int l, int r) {
  if(l > r) return 1e9 + 9;
  if(l == tl and r == tr) return t[v];
  int tm = (tl + tr) / 2;
  return cmp(sum(v * 2, tl, tm, l, min(r, tm)), 
         sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int new_val) {
  if(tl == tr) {
    t[v] = new_val;
  } else {
    int tm = (tl + tr) / 2;
    if(pos <= tm) update(v * 2, tl, tm, pos, new_val);
    else update(v * 2 + 1, tm + 1, tr, pos, new_val);
    t[v] = cmp(t[v * 2], t[v * 2 + 1]);
  }
}

void tTestCase(int t) {
  int n;
  scan(n);
}

void solve() {
  int n, m; cin >> n >> m;
  // bug(n, m);
  vi a(n); cin >> a;
  bug(a);
  build(a, 1, 0, a.size() - 1);
  for (int i = 0; i < m; ++i) {
    int type, u, v; cin >> type >> u >> v;
    // bug(u, v);
    if(type == 1) {
      update(1, 0, a.size() -1 , u , v );
    } else {
      print(sum(1, 0, a.size()-1 , u , v - 1));
      // bug(u, v - 1);
    }
  }
  // for (int i = 1; i <= a.size(); ++i) {
  //   print(sum(1, 0, a.size() - 1, i - 1, i - 1));
  // }
  // print(sum(1, 0, a.size() - 1, 0, 2 - 1));
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    // auto t1 = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < (4 * MAXN); ++i) {
    t[i] = 1e9 + 9;
  }
    solve();  return 0;
  // vi a = {1, 2, 3, 4, 5};
  vi a = {5,4,2,3,5};
  build(a, 1, 0, a.size() - 1);
  // update(1, 0, a.size() - 1, 2 - 1, 99);
  for (int i = 1; i <= a.size(); ++i) {
    print(sum(1, 0, a.size() - 1, i - 1, i - 1));
  }

  print(sum(1, 0, a.size() - 1, 1,3));

    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}