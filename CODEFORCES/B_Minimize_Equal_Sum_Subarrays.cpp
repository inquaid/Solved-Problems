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

int chk(vi &a, vi &b) {
  int cnt = 0;
  for (int i = 0; i < a.size(); ++i) {
    for (int j = 0; j < a.size(); ++j) {
      int s1 = 0, s2 = 0;
      for (int k = i; k <= j; ++k) {
        s1 += a[k]; s2 += b[k];
      }
      if(s1 == s2) cnt++;
    }
  }
  return cnt;
}

void tTestCase(int t) {
  int n;
  scan(n);
  vi a(n); cin >> a;
  cout << a.back() << " ";
  for (int i = 0; i < n - 1; ++i) {
    cout << a[i] << " ";
  } newl;
  // vi b, c;
  // if(n < 3) {
  //   reverse(all(a));
  //   print(a);
  //   return;
  // }
  // if(n&1) {
  //   int m = a[n / 2];
  //   // print(m);
  //   reverse(all(a));
  //   cout << m << " ";
  //   for (int i = 0; i < n; ++i) {
  //     if(a[i] != m) cout << a[i] << " ";
  //   }
  //   newl;
  // } else {
  //   int m = a[0];
  //   reverse(all(a));
  //   // print(a);
  //   cout << m << " ";
  //   for (int i = 0; i < n; ++i) {
  //     if(a[i] != m) cout << a[i] << " ";
  //   }
  //   newl;
  // }
  // for (int i = 0; i < n / 2; ++i) {
  //   b.push_back(a[i]);
  // }
  // for (int i = n / 2; i < n; ++i) {
  //   c.push_back(a[i]);
  // }
  // reverse(all(b));
  // reverse(all(c));
  // for (int i = 0; i < c.size(); ++i) {
  //   cout << c[i] << " ";
  // }
  // print(b);
  // vi b(n); cin >> b;
  // // vi b = {6, 2, 1, 4, 7, 3, 5};
  // print(chk(a, b));
  // reverse(all(a));
  // int indx = 0;
  // for (int i = 1; i <= n; i += 2) {
  //   // swap(a[i], a[i + 1]);
  //   a[indx++] = i;
  // }
  // for (int i = 2; i <= n; i += 2)
  // {
  //   a[indx++] = i;
  //   /* code */
  // }
  // if(n&1) {
  //   swap(a[0], a.back());
  // }
  // print(a);
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