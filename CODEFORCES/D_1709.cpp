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

vi a, b;

void f(int i, int j, vector<pii> &res) {
  if(i < j) {
    for (int k = i; k < j; ++k) {
      res.push_back({1, k});
      swap(a[k], a[k + 1]);
    }
    res.push_back({3, j});
    swap(a[j], b[j]);
  } else {
    for (int k = j; k < i; ++k) {
      res.push_back({2, k});
      swap(b[k], b[k + 1]);
    }
    res.push_back({3, i});
    swap(a[i], b[i]);
  }
}

map<int, int> posA, posB;


void f2(int i, int j, vector<pii> &res) {
  // bug(i, j);
  for (int k = j - 1; k >= i; k--) {
    // swap(posA[a[k]], posA[a[k + 1]]);
    res.push_back({1, k});
    swap(a[k], a[k + 1]);
    posA[a[k]] = k;
    posA[a[k + 1]] = k + 1; 
  }
}

void f3(int i, int j, vector<pii> &res) {
  // bug(i, j);
  for (int k = j - 1; k >= i; k--) {
    // swap(posB[b[k]], posB[b[k + 1]]);
    res.push_back({2, k});
    swap(b[k], b[k + 1]);
    posB[b[k]] = k; posB[b[k + 1]] = k + 1;
  }
}

void tTestCase(int t) {
  int n; cin >> n;
  a.resize(n); b.resize(n);
  vector<pii> res;
  cin >> a >> b;
  // bug(a); bug(b);
  int i = 0, j = 0;
  while(i < n and j < n) {
    while(i < n and a[i] <= n) {
      i++;
    }
    while(j < n and b[j] > n) {
      j++;
    }
    if(i < n and j < n) {
      if(a[i] > n and b[j] <= n) {
        f(i, j, res);
        // swap(a[i], b[j]);
      }
    } 
    if(a[i] <= n) i++;
    if(b[j] > n) j++;
   // i++; j++; 
  }
  posA.clear(); posB.clear();
  for (int i = 0; i < n; ++i) {
    posA[a[i]] = i; posB[b[i]] = i;
  }

  for (int i = 0; i < n; ++i) {
    int val = i + 1;
    if(a[i] != val) {
      // bug(i, val, posA[val], posA[i]);
      f2(i, posA[val], res);
    } // break;

    val = n + i + 1;
    // bug(val);
    if(b[i] != val) {
      f3(i, posB[val], res);
    }
  }


  print(res.size());
  // print(res);
  for(auto [x, y] : res) print(x, y + 1);
  // print(a);
  // print(b); 
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