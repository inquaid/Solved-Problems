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

int rizz(deque<int> &v, bool flag) {
  int sum = 0;
  for (int i = 0; i < v.size(); ++i) {
    if(flag)
      sum += v[i] * (i + 1);
    else
      sum += (v[i] * (v.size() - i));
  }
  return sum;
}

void tTestCase(int t) {
  int q; cin >> q;
  deque<int> dq;
  bool flag = 1;
  int s1 = 0, tsum = 0, s2 = 0;
  for (int i = 0; i < q; ++i) {
    int s; cin >> s;
    if(s == 1) {
      if(flag) {
        s1 += tsum - (dq.back() * (dq.size() ));
        dq.push_front(dq.back());
        dq.pop_back();
      } else {
        s1 += tsum - (dq.front() * (dq.size() )) ;
        dq.push_back(dq.front());
        dq.pop_front();
      }
    } else if(s == 2) {
      if(dq.size()) {
        s1 = (dq.size() + 1) * tsum - s1;
      }
      flag ^= 1;
    } else {
      int k; cin >> k; tsum += k;
        s1 += (k * (dq.size() + 1));
      if(flag) {
        dq.push_back(k);
      }
      else {
        dq.push_front(k);
      }
    }
    print(s1);
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

  solve();  return 0;
  bool flag = 0;
  for (int i = 0; i < 15; ++i) {
    if(flag)
      print(i + 1);
      // sum += v[i] * (i + 1);
    else
      print(15-i);
      // sum += (v[i] * (15 - i));
  }
  // bool flag = 1;
  // for (int i = 0; i < 5; ++i) {
  //   flag ^= 1;
  //   print(flag);
  // }
}