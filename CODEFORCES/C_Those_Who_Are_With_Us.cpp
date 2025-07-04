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
bool comp(pii &a, pii &b) { 
  if(a.ff != b.ff) {
    return a.ff < b.ff;
  } 
  return a.ss < b.ss;
}

vector<vi> mtx;
int n, m; 
int pos(int x) {
  vector<pair<int,int>> points;
  // map<int, int> row, col;
  set<int> row, col;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if(mtx[i][j] > x) {
        points.push_back({i, j});
        // row[i]++; col[j]++;
        row.insert(i); col.insert(j);
        bug(mtx[i][j], i);
      }
    }

  }
  bug(112, x);
  for(auto i : row) {
    cout << i << " ";
  } newl; newl;
  for(auto i : row) {
    map<int, int> cnt;
    for(auto[x, y]: points) {
      if(x != i) {
        cnt[y]++;
      }
    }
    if(cnt.size() <= 1) {
      return 1;
    }
  }

  // if(points.empty()) return 1;
  // sort(all(points), comp);
  // for(auto i : points) print(i); newl; newl;
  return 0;
}

pii f(vector<pii> &points) {
  set<int> row;
  for (int i = 0; i < points.size(); ++i) {
    row.insert(points[i].ff);
  }
  for(auto i : row) {
    map<int, int> cnt;
    int val = 0;
    for(auto [x, y] : points) {
      if(i != x) {cnt[y]++; val = y;}
    }
    if(cnt.size() <= 1) {
      // return cnt.size();
      return {i, val};
    }
    // if(cnt.size() == )
  }
  return {-1, -1};
}

void tTestCase(int t) {
  cin >> n >> m;
  mtx.clear();
  mtx.resize(n + 1, vi(m + 1, 0));
  // bug(n, m); return;
  int mx = 0;
  vi a;
  map<int, vector<pii>> mp;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> mtx[i][j];
      a.push_back(mtx[i][j]);
      mx = max(mx, mtx[i][j]);
      mp[mtx[i][j]].push_back({i, j});
      // cout << mtx[i][j] << " ";
    } // newl;
  }

  if(n == 1 or m == 1) {
    print(mx - 1); return;
  }

  sort_unique(a);
  reverse(all(a));
  // print(*mp.begin());
  // for(auto i : mp) {
  //   // print(v);
  //   for(auto p : v) print(p);
    // print(i.ff);
    // for(auto p : i.)
  // }
  set<int> row, col;
  mx = a[0];
  vi b;
  b.push_back(a[0]);
  for (int i = 1; i < a.size(); ++i) {
    if(b.back() + 1 == a[i]) {
      b.push_back(a[i]);
    } else break;
  }
  // bug(a);
  for (int i = 0; i < a.size(); ++i) {
    // if(mx - a[i] > 1) {
    //   print(mx); return;
    // }
    // bug(a[i]);
    pii temp = f(mp[a[i]]);
    if(temp.ff == -1) {
      print(a[i]);
      return;
    }
    if(i + 1 == a.size()) {
      print(a[i] - 1); return;
    }
    if(a[i] - 1 != a[i - 1]) {
      print(a[i] - 1); return;
    }
    // bug(i, a.size());
    row.insert(temp.ff);
    col.insert(temp.ss);
    if(row.size() > 1 or col.size() > 1) {
      print(a[i]); return;
    }
  mx = a[i];

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

    // auto t1 = std::chrono::high_resolution_clock::now();

    solve();  return 0;
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    // yesif(*st.lower_bound(12) != st.end());
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}