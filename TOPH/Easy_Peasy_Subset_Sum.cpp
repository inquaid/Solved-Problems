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
bool comp(vi &a, vi &b) { return a.size() < b.size(); }

vvi res;

void subsets(vi &a, int n, vi &temp) {
  if(n == 0) {
    res.push_back(temp);
    return;
  }
  subsets(a, n - 1, temp);
  temp.push_back(a[n - 1]);
  subsets(a, n - 1, temp);
  temp.pop_back();
}

void tTestCase(int t) {
  int n;
  scan(n);
}
const int M = 1000000007;

long long binpow(long long a, long long b) {
  a %= M;
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a % M;
    a = a * a % M;
    b >>= 1;
  }
  return res;
}

void solve() {
  int n; cin >> n;
  vi a(n); cin >> a;
  sort(all(a));
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum = (sum % M + (a[i] % M * ((2ll * (i + 1)) - n - 1)) % M) % M;
  }
  if(sum < 0) sum += M;
  print( (sum * binpow(2, n - 2)) % M );
  // bug(sum);
  // print(sum * (n - 1));
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

  solve();  return 0;
  vi v = {3, 7}, temp;
  subsets(v, v.size(), temp);
  sort(all(res), comp);
  map<int, int> mp;
  for(auto i : res) mp[i.size()]++;
  for(auto i : mp) print(i);

  int sum = 0;
  for (int i = 0; i < v.size(); ++i) {
    sum += v[i] * ((2 * (i + 1)) - v.size() - 1);
  }
  print(sum );
}