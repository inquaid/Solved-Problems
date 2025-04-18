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

void tTestCase(int t) {
  string a, b;
  cin >> a >> b;
  int i = 0, j = 0;
  bool flag = 1;
  vi vis(b.size() + 1, 0);
  while(i < a.size() and j < b.size()) {
    // int l1 = 0, l2 = 0;
    // while(i < a.size() and a[i] == 'L') l1++, i++; 
    // while(j < b.size() and b[j] == 'L') l2++, j++;
    // int r1 = 0, r2 = 0; 
    // while(i < a.size() and a[i] == 'R') r1++, i++; 
    // while(j < b.size() and b[j] == 'R') r2++, j++;
    // if(l1 > l2 or l1 * 2 < l2 or r1 * 2 < r2 or r1 > r2) {
    //   no; return;
    // }

    char curr = a[i];
    int cnt1 = 0;
    while(i < a.size() and a[i] == curr) {
      cnt1++;
      i++;
    }
    int cnt2 = 0;
    while(j < b.size() and b[j] == curr) {
      cnt2++;
      j++;
    }
    if(cnt2 < cnt1 or cnt2 > 2 * cnt1) {
      no; return;
    }

  }
    // bug(vis);
    // bug(i, a.size(), j, b.size());
  yesif(i == a.size() and j == b.size());

  // yes;
  // yesif(i < a.size() or)
  // if(i < a.size() or j < b.size()) flag = 0;
  // yesif(flag);
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

  solve();

  return 0;
}