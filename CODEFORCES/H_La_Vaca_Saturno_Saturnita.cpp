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

map<int, vi> mp;
int f(int k, int l, int r) {
  vector<pii> v;
  for (int d = 1; d * d <= k; ++d) {
    if(k % d == 0) {
      // bug(d, k / d);
      auto pos = lower_bound(mp[d].begin(), mp[d].end(), l);
      if(pos != mp[d].end() and *pos <= r ) {
        v.push_back({*pos, d});
      }
      if(k / d != d) {
        auto pos = lower_bound(mp[k / d].begin(), mp[k / d].end(), l);
        if(pos != mp[k / d].end() and *pos <= r) {
          v.push_back({*pos, k / d});
        }
      }
    }
  }
  // for(auto i : v) print(i);
  sort(all(v));
  int ans = 0;
  if(v.empty()) {
    return k * (r - l + 1);
  }
  int last = v[0].ff;
  int strt = 0;
  if(last != l) ans = k * (last - l );
  
  for (int i = strt; i < v.size() ; ++i) {
    int pos = v[i].ff, val = v[i].ss;
    while(k % val == 0) k /= val;
    if(i == v.size() - 1) last = r + 1;   
    else last = v[i + 1].ff;
    int gap = last - v[i].ff;
    ans += (k * gap);
  }
  return ans;
}

void tTestCase(int t) {
  int n, q; cin >> n >> q;
  vi a(n);
  mp.clear();
  // bug(mp.size());
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    mp[a[i]].push_back(i);
  }
  // for(auto i : mp) print(i.ss);
  for (int i = 0; i < q; ++i) {
    int k, l, r; cin >> k >> l >> r;
    // print(f(k, l, r, a));
    int temp = (f(k, l - 1, r - 1));
    print(temp);
    // break;
  }
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

  solve();  return 0;
  for (int i = 0; i < 5; ++i)
  {
    if(i == 4) print(i);
    // bug(i);
  }
  int n; cin >> n;
  vi a(n); cin >> a;
  for (int i = 0; i < a.size() - 1; ++i) {
    bug(i, a[i]);
  }
  auto it = lower_bound(all(a), 1);
  if(it == a.end()) yes;
  print(*it);
  print(it - a.begin());
  print(a[it - a.begin()]);
}