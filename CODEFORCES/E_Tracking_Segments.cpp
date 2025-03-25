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

struct point {
    int a, b;
    bool operator<(const point &other) const {
      if(a == other.a) return b < other.b;
      return a < other.a;
    }
};

bool comp(point &a, point &b) { 
  if(a.a != b.a) return a.a < b.a;
  return a.b < b.b;
}

vector<point> vp;

int lb(int x) {
  int l = 0, r = vp.size();
  while(l < r) {
    int mid = l + (r - l) / 2;
    if(vp[mid].a >= x) {
      r = mid - 1;
    } else l = mid + 1;
  } 
  return r + 1;
}

vector<int> makePreSum(vector<int> &a) {
    int n = a.size();
    vector<int> preSum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        preSum[i] = preSum[i - 1] + a[i - 1];
    }
    return preSum;
} // range(l - 1, r) 1 base indexing

int f(vi &updates) {
  vi preSum = makePreSum(updates);
  for(auto point : vp) {
    int strt = point.a, end = point.b;
    int ones = preSum[end] - preSum[strt - 1];
    // bug(strt, end, ones, preSum.size());
    if(ones >= floor((end - strt + 1) / 2.0) + 1) return 1;
  }
  return 0;
}

int ub(int x) {
  int l = 0, r = vp.size();
  while(l < r) {
    int mid = l + (r - l) / 2;
    if(vp[mid].b <= x) {
      l = mid + 1;
    } else r = mid - 1;
  }
  return l - 1;
}

void tTestCase(int t) { 
  vp.clear();
  int n, m;  
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
      point p;
      cin >> p.a >> p.b;
      vp.push_back(p);
  }
  vi str(n + 1, 0);
  // bug(str);
  bool flag = 0;
  int x, q; cin >> q; 
  vi res;
  for (int i = 0; i < q; ++i) {
    cin >> x; 
    res.push_back(x - 1);

    // str[x - 1] = 1;
    // bug(str);
    // if(!flag and f(str)) {
    //   print(i + 1); flag = 1;
    // }
    
  }
  int l = 1, r = q, ans = -1;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    bug(mid);
    vi temp(n + 1, 0);
    // copy(res.begin(), res.begin() + mid , temp.begin());
    for (int i = 0; i < mid; ++i) {
      temp[res[i]] = 1;
    }
    if(f(temp)) {
      r = mid - 1; ans = mid;
    } else l = mid + 1;

  }
  print(ans);
  // bug(x);
  // if(!flag)
  //   print(-1);
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

  solve();  return 0;

  vi a = {1,2,3,4,5};
  vi b(5);
  copy(all(a), b.begin());
  print(b);
  b.resize(3, 0);
  copy(a.begin(), a.begin() + 1, b.begin());
  print(b);
}