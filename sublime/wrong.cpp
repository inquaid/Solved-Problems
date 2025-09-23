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

#define yes cout << "YES\n"
#define no cout << "NO\n"
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

int f(int n, vi a) {
  map<int, int> mp;
  for (int b = 0; b < 64; ++b) {
    for (int i = 0; i < n; ++i) {
      mp[b] += ((a[i]>>b) & 1ll);
    }
  }
  for (int i = 0; i < n; ++i) {
    bool flag = 0;
    for (int b = 0; b < 64; ++b) {
      if(((a[i]>>b)&1ll) and mp[b] == 1) {
        flag = 1;
      }
    }
    if(!flag) {
      return 0;
    }
  }
  return 1;
}

void tTestCase(int t) {
  int n; cin >> n;
  vi a(n); cin >> a;
  if(n > 60) {
    no; return;
  }
  map<int, int> mp;
  set<int> st;
  for (int i = 0; i < a.size(); ++i) {
    int cnt = 0ll;
    for (int j = i; j < a.size(); ++j) {
      cnt |= a[j];
      st.insert(cnt);
    }
    
  } 
  // while(st.size()) {
  //   print(st.front()); st.pop();
  // }

  int c1 = (st.size() == (n*(n+1)) / 2);  
    // bug(mp.size());
    // yes;/
  int c2 = f(n, a);
  yesif(c1 == c2);
  // print(c1, c2);
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
    vi a = {5,2,2,4,2};
    map<int, int> mp;
    for (int i = 0; i < a.size(); ++i) {
      for (int j = i; j < a.size(); ++j) {
        int cnt = 0;
        for (int k = i; k <= j; ++k) {
          cnt |= a[k];
          cout << a[k] << " ";
        } newl;
        mp[cnt]++;
        if(mp[cnt] > 1) {
          // no; return 0;
        }
      }
    }
    bug(mp.size());
    yes;
    for(auto i : a) {
      bitset<15> bs(i);
      print(bs);
    }
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}