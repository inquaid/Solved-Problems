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
  int n; cin >> n;
  vi a(2 * n); cin >> a;
  if(n == 1) {
    print(max(a[0], a[1])); return;
  }
  multiset <int> mst;
  // mst.insert(max(a[0], a[1]));
  int p1 = a[0] + max(a[2], a[3]);
  int p2 = a[1] + max(a[2], a[3]);
  int p3 = a[2] + a[3], thrd = 0;
  if(p1 >= p2 and p1 >= p3) {
    mst.insert(a[0]);
    mst.insert(max(a[2], a[3]));
    thrd = max(a[1], min(a[2], a[3]));
  } else if(p2 >= p1 and p2 >= p3) {
    mst.insert(a[1]);
    mst.insert(max(a[2], a[3])); thrd = max(a[0], min(a[2], a[3]));
  } else {
    mst.insert(a[2]); mst.insert(a[3]); thrd = max(a[0], a[1]);
  }
  // bug(a);
  // mst.insert(max(a[2], a[3]));
  // bool flag = 0;
  for (int i = 4; i < 2 * n; i += 2) {
    bug(a[i], a[i + 1]);
    multiset<int> temp;
    auto it = mst.begin();
    // bug(mst.size());
    temp.insert(*it);
    // it = mst.begin();
    // temp.insert(*it); mst.erase(it);

    // temp.insert(a[i]); temp.insert(a[i + 1]);
    // auto it2 = temp.rbegin(); 
    if(*it < min(a[i], a[i + 1])) {
      mst.erase(mst.begin());
      mst.insert(a[i]); mst.insert(a[i + 1]);
    } else {
      mst.insert(max(a[i], a[i + 1]));
    }
    // for(auto i : mst) bug(i);

    // // bug(*it2);
    // mst.insert(*it2); it2--; 
    // mst.insert(*it2);
    // // mst.insert(p3);
    // bug(p3);

    // return;
    // mst.insert(thrd);
    // auto it3 = temp.begin();
    // int p1 = *it3; it3++;
    // int p2 = *it3;
    // thrd = max(p1, p2);
    // bug(thrd);
    // if(i == 4) {
      // it2--;
      // mst.insert(*it2);
    // }
  }
  // if(thrd > *mst.begin()) {
  //   mst.erase(mst.begin());
  //   mst.insert(thrd);
  // }
  int s = 0;
  for(auto i : mst) {
    bug(i);
    s += i;
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

    solve();   return 0;
    multiset<int> mst;
    mst.insert(1);
    mst.insert(10);
    mst.insert(11);
    mst.insert(12);
    auto it = mst.rbegin();
    print(*it);
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cerr << "    time: " << duration.count() << " ms" << endl;

  return 0;
}