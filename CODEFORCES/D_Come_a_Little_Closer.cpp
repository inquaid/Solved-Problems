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

int f2(int mnx, int mxx, int mny, int mxy) {
  return (mxx - mnx + 1) * (mxy - mny + 1);
}
int f(int mnx, int mxx, int mny, int mxy, int n) {
  if(mnx > mxx) swap(mnx, mxx);
  if(mny > mxy) swap(mny, mxy);
  bug(mnx, mxx, mny, mxy);
  int temp = f2(mnx, mxx, mny, mxy);
  // bug(temp);
  if(temp < n) return min(
            f(mnx, mxx + 1, mny, mxy, n),
            f(mnx, mxx, mny, mxy + 1, n));
  return temp;
}

void tTestCase(int t) {
  int n; cin >> n;
  vi l(n), r(n);
  map<int, int> mpl, mpr;
  set<int> l2, r2;
  int mnx = INT_MAX, mxx = 0, mny = INT_MAX, mxy = 0;
  for (int i = 0; i < n; ++i) {
    cin >> l[i] >> r[i]; mpl[l[i]]++; mpr[r[i]]++;
    l2.insert(l[i]);
    r2.insert(r[i]);
    mnx = min(mnx, l[i]); mxx = max(mxx, l[i]);
    mny = min(mny, r[i]); mxy = max(mxy, r[i]);
  }
  // bug(l2.size(), r2.size());
  // l2.erase(l2.begin());
  // r2.erase(r2.begin());
  // sort_unique(l); sort_unique(r);
  // sort(all(l2)); sort(all(r2));
  // print(f(l[0], l.back(), r[0], r.back()));
  int res = f(mnx, mxx, mny, mxy, n);
  for (int i = 0; i < n; ++i) {
    if(mpl[l[i]] == 1 and mpr[r[i]] == 1 and l2.size() > 1 and r2.size() > 1) {
      // res = min(res, f());
      if(l[i] == mnx and r[i] == mny) {
        auto itx = next(l2.begin());
        auto ity = next(r2.begin());
        res = min(res, f(*itx, mxx, *ity, mxy, n));
      } else if(l[i] == mnx and r[i] == mxy) {
        auto itx = next(l2.begin());
        auto ity = next(r2.rbegin());
        res = min(res, f(*itx, mxx, mny, *ity, n));
      } else if(l[i] == mxx and r[i] == mny) {
        auto itx = next(l2.rbegin());
        auto ity = next(r2.begin());
        res = min(res, f(mnx, *itx, *ity, mxy, n));
      } else if(l[i] == mxx and r[i] == mxy) {
        auto itx = next(l2.rbegin());
        auto ity = next(r2.rbegin());
        res = min(res, f(mnx, *itx, mny, *ity, n));
      }
    } 
    if(mpl[l[i]] == 1 and l2.size() > 1) {
      if (l[i] == mnx) {
        auto itx = next(l2.begin());
        res = min(res, f(*itx, mxx, mny, mxy, n));
      } else if (l[i] == mxx) {
          auto itx = next(l2.rbegin());
          res = min(res, f(mnx, *itx, mny, mxy, n));
      }
    } 
    if(mpr[r[i]] == 1 and r2.size() > 1) {
      if (r[i] == mny) {
        auto ity = next(r2.begin());
        res = min(res, f(mnx, mxx, *ity, mxy, n));
      } else if (r[i] == mxy) {
        auto ity = next(r2.rbegin());
        res = min(res, f(mnx, mxx, mny, *ity, n));
      }
    }
  }


  // if(mpl[l[0]] == 1 and l.size() > 1) {
  //   res = min(res, f(l[1], l.back(), r[0], r.back(), n));    
  //   res = min(res, f(l[1] + 1, l.back(), r[0], r.back(), n));    
  //   res = min(res, f(l[1], l.back(), r[0] + 1, r.back(), n));    
  // }
  // if(mpl[l.back()] == 1 and l.size() > 1) {
  //   // int temp = f(l[0], l[l.size()- 2], r[0], r.back());
  //   res = min(res, f(l[0], l[l.size()- 2], r[0], r.back(), n));  
  //   res = min(res, f(l[0] + 1, l[l.size()- 2], r[0], r.back(), n));  
  //   res = min(res, f(l[0], l[l.size()- 2], r[0] + 1, r.back(), n));  
  // }

  // if(mpr[r[0]] == 1 and r.size() > 1) {
  //   res = min(res, f(l[0], l.back(), r[1], r.back(), n));    
  //   res = min(res, f(l[0] + 1, l.back(), r[1], r.back(), n));    
  //   res = min(res, f(l[0], l.back(), r[1] + 1, r.back(), n));    
  // }
  // if(mpr[r.back()] == 1 and r.size() > 1) {
  //   // int temp = f(l[0], l[l.size()- 2], r[0], r.back());
  //   res = min(res, f(l[0], l[l.size()- 1], r[0], r[r.size()-2], n));  
  //   res = min(res, f(l[0] + 1, l[l.size()- 1], r[0], r[r.size()-2], n));  
  //   res = min(res, f(l[0], l[l.size()- 1], r[0] + 1, r[r.size()-2], n));  
  // }

    
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

    solve();  return 0;
  set<int> st;
  st.insert(1);
  st.insert(2);
  st.insert(3);
  st.insert(4);
  print(*st.begin());
  print(*st.rbegin());
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}