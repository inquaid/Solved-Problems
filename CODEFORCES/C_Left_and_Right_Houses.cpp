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
int mid(int a, int b) { return ceil(a + b, 2); }
int dist(int n, int i) { return abs(n - (2  * i)); }
void tTestCase(int t) {
  int n;
  scan(n);
  vi a(n);
  string s; cin >> s;
  int one = 0, zero = 0;
  for (int i = 0; i < n; ++i) {
    // cin >> a[i];
    if(s[i] == '1') one++; 
  }
  int res = -1, cnt = 0;
  vi ans;
  // bug(zero, one);
  for (int i = -1; i < n; ++i) {
    if(i >= 0 and s[i] == '1') {
      one--;
    } else if(i >= 0) zero++;
    // print(cnt, one);
    int left = i + 1, right = n - i - 1;
    // print(left, right, ceil(i + 1, 2), ceil(n - i - 1, 2));
    left = ceil(i + 1, 2); right = ceil(n - i - 1, 2);
    // bug(left, right);
    bug(i, zero, left, one, right);

    if(zero >= left and one >= right) {
      ans.push_back(i + 1);
    }

    // bug(i);
  }
  int m = (n / 2), len = n;
  if(n % 2 == 0) m = n / 2;
  else m = n / 2 - 1;
  // print(ans, m);
  res = ans[0];
  for (int i = 0; i < ans.size(); ++i) {
    // if(abs(ans[i] - m) < abs(res - m)) {
    //   res = ans[i];
    // }
    if(dist(n, ans[i]) < dist(n, res)) {
      res = ans[i];
    }
    // res = ans[i];
    // if(res >= m) break;
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

    solve();  // return 0;

    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}