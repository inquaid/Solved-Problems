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

void tTestCase(int t) {
  int n;
  scan(n);
  vi a(n), b(n);
  map<int, int> mp1, mp2;
  for (int i = 0; i < n; ++i) {
    cin >> a[i]; mp1[a[i]] = i;
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i]; mp2[b[i]] = i;
  }
  // bug(a);
  // bug(b);
  int cnt = 0, indx = -1;
  for (int i = 0; i < n; ++i) {
    if(a[i] == b[i]) {cnt++; indx = i; }
    if(mp1[b[i]] != mp2[a[i]] or cnt > 1) {
      print(-1);
      return;
    }
  }
  vii res;
  bug(indx);
  vi marked(n + 2, 0);
  if((n & 1) and indx != n / 2) {
    res.push_back({indx + 1, n / 2 + 1});
    marked[indx] = 1;
    marked[n / 2] = 1;
    swap(a[indx], a[n / 2]);
    swap(b[indx], b[n / 2]);
    mp1[a[indx]] = indx;
    mp1[a[n / 2]] = n / 2;
    mp2[b[indx]] = indx;
    mp2[b[n / 2]] = n / 2;
  }
  bug(a);
  bug(b);
  for (int i = 0; i < n / 2; ++i) {
    int j = n - 1 - i; 
    if (!marked[i] && !marked[j]) {
      if (b[j] != a[i]) {
        int pos = mp2[a[i]];
        if (pos != j) {
          res.push_back({pos + 1, j + 1});
          swap(a[pos], a[j]);
          swap(b[pos], b[j]);
          mp1[a[pos]] = pos;
          mp1[a[j]] = j;
          mp2[b[pos]] = pos;
          mp2[b[j]] = j;
        }
      }
      marked[i] = marked[j] = 1;
    }
  }
  print(res.size());
  // print(res);
  for(auto i : res) print(i);
  // print("OK");

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