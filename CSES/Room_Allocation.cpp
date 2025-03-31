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
#define newl "\n"

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

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


void tTestCase(int t) {
  int n;
  scan(n);
}

struct schedule {
  int arrive, depart, indx;
};

bool comp(schedule a, schedule b) { return a.arrive < b.arrive; }

void solve() {
  int n; cin >> n;
  vector<schedule> vt;
  for (int i = 0; i < n; ++i) {
    schedule temp; cin >> temp.arrive >> temp.depart;
    temp.indx = i;
    vt.push_back(temp);
  }
  sort(all(vt), comp);
  // for(auto i : vt) {
  //     print(i.arrive, i.depart);
  // }
  set<pii> st;
  set<int> ans;
  map<int, int> mp;
  int cnt = 1;
  vi res(n, 0);
  for (int i = 0; i < n; ++i) {
    if(st.empty() or (*st.begin()).ff >= vt[i].arrive) {
      st.insert({vt[i].depart, cnt});
      res[vt[i].indx] = cnt; ans.insert(cnt);
      cnt++;
    } else {
      int temp = (*st.begin()).ss;
      st.erase(st.begin());
      st.insert({vt[i].depart, temp});
      res[vt[i].indx] = temp; ans.insert(temp);
    }
  }
  print(ans.size());
  print(res);
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

  solve();  return 0;

  // map<int, int> mp; mp[1] = 2; mp[2] = 3;
  // int cnt  = 5;
  // while(mp.size() and (*mp.begin()).ff < 4) {
  //   auto it = *mp.begin();
  //   // it.ss--;
  //   mp[it.ff]--;
  //   print(it);
    
  //   cnt--;
  //   if(cnt < 0)
  //   break;
  // }

  // print(*mp.begin());
  // auto it = *mp.begin();
  // it.ss--;
  // mp.erase(it.ff);
  // print(it);
  multiset<int> mst;
  mst.insert(1);
  mst.insert(1);
  mst.insert(1);
  mst.insert(1);
  mst.insert(1);
  auto it = mst.find(1);
if(it != mst.end()){
    mst.erase(it);  // Removes only the element pointed to by 'it'
}

  for(auto i : mst) print(i);
}