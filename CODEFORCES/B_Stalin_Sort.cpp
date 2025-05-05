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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

/**
 *  less_equal, greater, greater_equal
 *  order_of_key(k) : no. of elements < k
 *  find_by_order(i) : value at index i (0-based)
**/


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

void erase(ordered_set<int> &t, int v){
    int rank = t.order_of_key(v);
    ordered_set<int>::iterator it = t.find_by_order(rank); 
    t.erase(it);
}

void tTestCase(int t) {
  int n; cin >> n;
  ordered_set<int> ost, s_ost;
  vi a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i]; ost.insert(a[i]);
  }
  // bug(a);
  // for(auto i : ost) {
  //   cout << i << " ";
  // }
  // newl;
  int res = INT_MAX;
  for (int i = 0; i < n; ++i) {
    int cnt = 0;
    if(ost.size() and s_ost.size()) {
      int lesser = s_ost.order_of_key(a[i]);
      int greater = ost.size() - ost.order_of_key(a[i] + 1);
      bug(lesser, greater);
      cnt = greater + lesser;
      
    } else if(ost.size()) {
      int greater = ost.size() - ost.order_of_key(a[i] + 1);
      cnt = greater;
    } else {
      int lesser = s_ost.order_of_key(a[i]);
      cnt = lesser;
    }
    res = min(res, cnt);
    // bug(cnt);
    s_ost.insert(a[i]);
    // erase(ost, a[i]);
  }
  print(res);
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

    solve();   return 0;
    ordered_set<int> mst;
    mst.insert(11);
    mst.insert(12);
    mst.insert(13);
    mst.insert(13);
    mst.insert(14);
    mst.insert(15);
    mst.insert(15);
    // f(mst, 13);
    erase(mst, 12);
    // mst.erase(mst.find_by_order(12));
    // print(mst.order_of_key(14));
    for(auto i : mst) {
      cout << i << " ";
    }
    // print((mst.upper_bound(2) - mst.begin()));

    // vi v = {1, 2, 3, 4, 5};
    // print(v);
    // v.erase(v.begin());
    // print(v);
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}