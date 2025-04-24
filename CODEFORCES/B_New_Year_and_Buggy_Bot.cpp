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

int n, m, si, sj, ei, ej; 
vector<string> vs;
int is_Possible(string &path, vi &v) {
  int i = si, j = sj, k = 0;
   while(k < path.size()) {
    // if(i == ei and j == ej) return 1;
    int temp = (v[path[k] - '0'] );
    bug(i, j, temp);
    // bug(temp);
    if(temp == 0) {
      i++;
    } else if(temp == 1) {
      i--;
    } else if(temp == 2) {
      j++;
    } else {
      j--;
    }
    if(i < 0 or j < 0 or i >= n or j >= m ) return 0;
    if(vs[i][j] == '#') return 0;
    if(vs[i][j] == 'E') return 1;
    k++;
  } 
  // bug(12);
  return 0;
}

void solve() {
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    string temp; cin >> temp; vs.push_back(temp);
    for (int j = 0; j < m; ++j) {
      if(temp[j] == 'S') {si = i, sj = j;}
      if(temp[j] == 'E') {ei = i, ej = j;}
    }
  }
  string s; cin >> s;

  vi v = {0, 1, 2, 3};
  // v = {3,1,0,2};
  // print(is_Possible(s, v));
  // bug(si, sj);
  // s = "0123";
  int cnt = 0;
  do {
    cnt += is_Possible(s, v);
    // print(v);
    // bug("__________________________");
  } while(next_permutation(all(v)));
  print(cnt);
  // for (int i = 0; i < (1<<4); ++i) {
  //   // print(i);

  // }
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    // auto t1 = std::chrono::high_resolution_clock::now();

    solve();  return 0;
    int temp = ('1'-'0');
    print(temp + 4);

    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cout << "    time: " << duration.count() << " ms" << endl;

  return 0;
}