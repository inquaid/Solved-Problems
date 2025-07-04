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
#define x first
#define y second

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

int ceil(int a,int b){ return (a+b-1)/b; }
bool comp(int a, int b) { return a > b; }

void tTestCase(int t) {
  int w, h, a, b;
  cin >> w >> h >> a >> b;
  // int x1, y1, x2, y2;
  pair<int, int> p1, p2;
  cin >> p1.x >> p1.y >> p2.x >> p2.y;
  
  pair<int, int> p3, p4;
  p3.x = p1.x + a - 1, p3.y = p1.y + b - 1;
  p4.x = p2.x + a - 1, p4.y = p2.y + b - 1;
  int gapx = p2.x - p3.x - 1, gapy = p2.y - p3.y - 1;
  bug(p1.x, p1.y, p2.x, p2.y);
  bug(p3.x, p3.y, p4.x, p4.y, gapx, gapy);

  if((p1.y <= p2.y and p2.y <= p3.y) or (p1.y <= p4.y and p4.y <= p3.y) ) {
    if(gapx % a) {
      no; return;
    }
  }
  if((p1.x <= p2.x and p2.x <= p3.x) or (p1.x <= p4.x and p4.x <= p3.x) ) {
    if(gapy % b) {
      no; return;
    }
  }
  if(gapx % a and gapy % b) {
    no; return;
  }
  yes;

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

    solve();   return 0;
    int w1 = 10,h1 = 9, a1 = 3, b1 = 2, x1 = 0, y1 = 0,x2 = 4,y2 = 3;
    int a = w1, b = h1;
    for (int i = 0; i < a; ++i) {
      for (int j = 0; j < b; ++j) {
        cout << i << " " << j << " ";
      } newl;
    }

    print("red");
    int w = a1, h = b1;

    a = x1, b = y1;
    for (int i = a; i < a + w; ++i) {
      for (int j = b; j < b + h; ++j) {
        cout << i << " " << j << " ";
      } newl;
    }

    a = x2, b= y2;
    for (int i = a; i < a + w; ++i) {
      for (int j = b; j < b + h; ++j) {
        cout << i << " " << j << " ";
      } newl;
    }



    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}