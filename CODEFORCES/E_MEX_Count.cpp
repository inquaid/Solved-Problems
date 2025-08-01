/**
 * https://codeforces.com/contest/2123/problem/E
 * 
 * have to find number of unique MEX after removing k (0..n)
 * Or, we can say we have to find for which numbers the MEX is -> i(0..MEX(a))
 * for any number i we can observe the answer will be i
 * iff there are all numbers atleast once that are less than i
 * so minimum operations needed here will be count(i)
 * and for maximum operations we can remove all the numbers
 * after it including itself with all of their frequencies
 * and for numbers less than i we can remove if any of
 * their frequency is more than 1, then we can add (freq(j) - 1)
 * Or, max = n - i
 * Now we observe that min to max are all valid
 * So, we just increment the value
 * and finally print.
 * */

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

struct segtree {
  ll size, boundary = 0ll;
  vector<ll> operations;

  void op(int v, int val) {
    operations[v] = operations[v] + val;
  }

  void init(int n) {
    size = (1ll << (int)ceil(log2(n)));
    operations.assign(2 * size, boundary);
  }

  void add(int v, int lv, int rv, int l, int r, int val) {
    if(lv >= r or l >= rv) return;
    if(lv >= l and rv <= r) {
      op(v, val); return;
    }
    int m = (lv + rv) / 2;
    add(2 * v + 1, lv, m, l, r, val);
    add(2 * v + 2, m, rv, l, r, val);
  }

  void add(int l, int r, int val) {
    add(0, 0, size, l, r, val);
  }

  ll get(int v, int lv, int rv, int i) {
    if(rv - lv == 1) return operations[v];
    int m = (lv + rv) / 2;
    ll res;
    if(i < m) 
      res = get(2 * v + 1, lv, m, i);
    else
      res = get(2 * v + 2, m, rv, i);
    return res + operations[v];
  }

  ll get(int i) {
    return get(0, 0, size, i);
  }

};

void tTestCase(int t) {
  int n; cin >> n;
  vi a(n); cin >> a;
  map<int, int> mp;
  for(auto elem : a) mp[elem]++;
  sort_unique(a);
  bug(a);
  vi res(n + 1, 0);
  bug(a.size());
  int mx = a.size();
  for (int i = 0; i < a.size(); ++i) {
    if(a[i] != i) {
      mx = i; break;
    }
  }
  // bug(mx);
  segtree st;
  st.init(n + 1);
  for (int i = 0; i <= mx; ++i) {
    int mn = mp[i];   
    int mx = n - i ;
    // print(i, mn, mx);
    // for (int j = mn; j <= mx; ++j) {
    //   res[j]++;
    // }
    st.add(mn, mx + 1, 1);
  } 
  // print(0, n - a.size());
  // for (int j = 0; j <= n - a.size(); ++j) {
  //   res[j]++; 
  // }
  for (int i = 0; i <= n; ++i) {
    cout << st.get(i) << " ";
  } newl;
  // print(res);
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

    solve();  return 0;
    segtree st;
    st.init(10);
    st.add(4, 8, 2);
    st.add(1, 6, 1);

    for (int i = 0; i < 10; ++i) {
      cout << st.get(i) << " ";
    }

    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}