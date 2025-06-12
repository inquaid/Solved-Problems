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

void tTestCase(int t) {
  int n, q; cin >> n >> q;
  string s; cin >> s; // bug(n, q, s);
  int b_a = 0, b_c = 0, c_a = 0, c_b = 0;
  set<int> pos_b_a, pos_b_c, pos_c_a, pos_c_b;
  for (int i = 0; i < q; ++i) {
    char c1, c2; cin >> c1 >> c2;
    if(c1 == 'b' and c2 == 'a') {
      b_a++; pos_b_a.insert(i);
    }
    else if(c1 == 'b' and c2 == 'c') {
      b_c++; pos_b_c.insert(i);
    }
    else if(c1 == 'c' and c2 == 'a') {
      c_a++; pos_c_a.insert(i);
    }
    else if(c1 == 'c' and c2 == 'b') {
      c_b++; pos_c_b.insert(i);
    }
  }
  for (int i = 0; i < n; ++i) {
    if(s[i] == 'b') {
      if(b_a > 0) {
        b_a--; s[i] = 'a';
      } else if(b_c > 0 and c_a > 0) {
        if(pos_c_a.empty() or pos_b_c.empty()) continue;
        auto it = pos_c_a.lower_bound(*pos_b_c.begin()); 
        if(it != pos_c_a.end()) {
          pos_c_a.erase(it); pos_b_c.erase(pos_b_c.begin());
          b_c--; c_a--; s[i] = 'a';
        }
        // b_c--; c_a--;
        // s[i] = 'a';
      }
    } else if(s[i] == 'c') {
      if(c_a  > 0) {
        c_a--; s[i] = 'a'; continue;
      } 
      if(c_b > 0) {
        c_b--; s[i] = 'b';
      }
      if(b_a <= 0) continue;
      if(pos_c_b.empty() or pos_b_a.empty()) continue;
      auto it = pos_b_a.lower_bound(*pos_c_b.begin());
      if(it != pos_b_a.end()) {
        pos_b_a.erase(it); pos_c_b.erase(pos_c_b.begin());
        b_a--; s[i] = 'a';
      }
    }
  }
  print(s);
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
    for (int i = 0; i < 26; ++i) {
      print(char('a' + i));  
    }
    // vi a = {10, 12, 14, 16, 18, 20};
    // yesif((lower_bound(all(a), 1812) ) != a.end());
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
} 