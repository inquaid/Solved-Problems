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

#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff first
#define ss second

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

int ceil(int a,int b){ return (a+b-1)/b; }
bool comp(int a, int b) { return a > b; }

int f(int val, vi &v) {
  int l = 0, r = v.size();
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(v[mid] <= val) {
      r = mid - 1;
    } else l = mid + 1;
  }
  return r + 1;
}

void tTestCase(int t) {
  int n; cin >> n;
  priority_queue<pii> pq;
  for (int i = 0; i < n; ++i) {
    int temp; cin >> temp;
    pq.push({temp, i});
  }
  // while(pq.size()) {
  //   print(pq.top()); pq.pop();
  // }
  // vi a(n); cin >> a;
  // vi m;
  int q; cin >> q;
  for (int i = 0; i < q; ++i) {
    int temp; cin >> temp;
    while(pq.size()) {
      auto [x, i] = pq.top(); 
      if(x < temp) break;
      pq.pop();
      x = x % temp;
      pq.push({x, i});
    }

  //   if(m.empty()) m.push_back(temp);
  //   else if(m.back() > temp) m.push_back(temp);
  }
  vi res(n, 0);
  while(pq.size()) {
    auto [x, i] = pq.top(); pq.pop();
    res[i] = x;
  }

  // for (int i = 0; i < n; ++i) {

  //   int indx = f(a[i], m);
  //   // bug(indx);
  //   for (int k = indx; k < m.size(); ++k) {
  //     int elem = m[k];
  //     a[i] %= elem;
  //     if(a[i] == 0) break;
  //   }
  // }
  cout << "Case " << t << ":\n";
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