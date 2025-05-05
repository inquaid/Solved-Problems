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

#define yesif(flag) cout << ((flag) ? "Yes\n" : "No\n")
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
  int a, b; cin >> a >> b;
  string s; cin >> s;
  int i = 0, j = s.size() - 1;
  while(i < j) {
    // print(i, j);
    if(s[i] != s[j]) {
      if(s[i] != '?' and s[j] != '?') {
        print(-1); return;
      }
      if(s[i] == '?') s[i] = s[j];
      else s[j] = s[i];
    }
    i++; j--;
  }
  int m = i;
  int n = a + b;
  int one = count(all(s), '1');
  int zero = count(all(s), '0');
  int ext = n - one - zero;
  // bug(one, zero);
  // if(n % 2 == 0) {

  if(n&1) {
    if((a&1) and (b&1)) {
      print(-1); return;
    }
    if(a&1) {
      if(s[m] == '1') {
        print(-1); return;
      }
      if(s[m] == '0') zero--;
      s[m] = '0';
      a--;

    } else {
      if(s[m] == '0') {
        print(-1); return;
      }
      if(s[m] == '1') one--;
      s[m] = '1';
      b--;
    }
  }

  if((one & 1) or (zero & 1)) {
    print(-1); return;
  }
  int n1 = a - zero;
  if(n1 < 0 or (n1 & 1)) {
    print(-1); return;
  }
  int n2 = b - one;
  if(n2 < 0 or (n2 & 1)) {
    print(-1); return;
  }
  i = 0, j = s.size() - 1;

  while(i < j) {
    // print(i, j);
    if(s[i] == '?') {
      if(n1 > 0) {
        s[i] = s[j] = '0'; 
        n1 -= 2;
      }
      else {
        s[i] = s[j] = '1';
        n2 -= 2;
      }
    }


    i++; j--;
  }
    print(s);
  // } else {

  // }
  // print(s);
  // print(i);
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