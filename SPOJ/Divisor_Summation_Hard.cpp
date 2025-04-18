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

const int N = 100000000;
// const int N = 1000;
vector<int> lp(N+1);
vector<int> pr;
void seive() {
  for (int i=2; i <= N; ++i) {
    if (lp[i] == 0) {
      lp[i] = i;
      pr.push_back(i);
    }
    for (int j = 0; i * pr[j] <= N; ++j) {
      lp[i * pr[j]] = pr[j];
      if (pr[j] == lp[i]) {
        break;
      }
    }
  }
}


__int128 read() {
  string s; cin >> s;
  __int128 ans = 0;
  for (int i = 0; i < s.size(); i++) {
    ans = ans * 10 + (s[i] - '0');
  }
  return ans;
}

string to_string(__int128 x) {
  string s;
  while (x > 0) {
    s += (char)(x % 10 + '0');
    x /= 10;
  }
  reverse(s.begin(), s.end());
  return s;
}

void write(__int128 x) {
  cout << to_string(x) << '\n';
}

lll binpow(lll a, lll b) {
    if (b == 0)
        return 1;
    lll res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

void tTestCase(int t) {
  lll a, b; a = read();
  if(a == 1) {
    print(0);
    return;
  }
  lll temp = a;
  lll res = 1ll;
  for(auto i : pr) {
    if(i * i > a) break;
    if(a % i == 0) {
      int cnt = 0;
      while(a % i == 0) {
        cnt++; a /= i; 
      }
      // bug(i, cnt);
      res *= ((binpow(i, cnt + 1) - 1) / (i - 1));
    }
  }
  // bug(a); 
  // bug(a);
  if(a != 1)
    res *= ((binpow(a, 2) - 1) / (a - 1));
  res -= temp;
  write(res);
  // print(res - temp);
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
  seive();
  solve();  return 0;
  set<int> st;
  int n = 243;
  for (int i = 2; i * i <= n; ++i) {
    if(n % i == 0) {
      // while(n % i == 0) n /= i;
      st.insert(i);
      if(n / i != i) st.insert(n / i);
    }
  }
  // ans = ()
  for(auto i : st) {
    cout << i << " ";
  }
}