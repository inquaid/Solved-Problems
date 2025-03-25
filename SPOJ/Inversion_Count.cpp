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
#define newl "\n"

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

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

bool comp(int a, int b) { return a > b; }

int merge(vi &left, vi &right, vi &v) {
  int i = 0, n = left.size(), j = 0, m = right.size(), k = 0;
  int cnt = 0;
  while(i < n and j < m) {
    if(left[i] <= right[j]) v[k++] = left[i++];
    else {
      v[k++] = right[j++];
      cnt += (n - i);
    } 
  }
  while(i < n) v[k++] = left[i++];
  while(j < m) v[k++] = right[j++];
  return cnt;
}

int devide(vi &v) {
  if(v.size() == 1) return 0;
  int mid = v.size() / 2;
  vi left(mid), right(v.size() - mid);
  copy(v.begin(), v.begin() + mid, left.begin());
  copy(v.begin() + mid, v.end(), right.begin());

  return devide(left) + devide(right) + merge(left, right, v);
}

void tTestCase(int t) {
  int n;
  scan(n);
  vi a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  print(devide(a));
  bug(a);
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