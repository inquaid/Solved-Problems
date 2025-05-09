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

// #define int long long
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

const int N = 1e8;
// vector<int> lp(N+1);
vector<int> pr;
// void sieve() {
//   for (int i=2; i <= N; ++i) {
//     if (lp[i] == 0) {
//       lp[i] = i;
//       pr.push_back(i);
//     }
//     for (int j = 0; i * pr[j] <= N; ++j) {
//       lp[i * pr[j]] = pr[j];
//       if (pr[j] == lp[i]) {
//         break;
//       }
//     }
//   }
//   // print(pr.)
// }
void solve() {
  // int t = 1; 
  // cin >> t;
  // for(int i = 1; i <= t; i++) {
  //   // cout << "Case " << i << ": ";
  //   tTestCase(i);
  // }
}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){ return N=N | (1<<pos);}

// int mx = 1000;
int status[(100000000/32)+2];

void sieve2()
{
   int i, j, sqrtN; 
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 ) 
     {
     if( Check(status[i>>5],i&31)==0)
     {
       for( j = i*i; j <= N; j += (i<<1) )
       {
         status[j>>5]=Set(status[j>>5],j & 31)   ;
       }
     }
   }
  
   // puts("2");
   pr.push_back(2);
   for(i=3;i<=N;i+=2)
     if( Check(status[i>>5],i&31)==0)
        pr.push_back(i);
     // printf("%d\n",i);
}
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    // auto t1 = std::chrono::high_resolution_clock::now();
    sieve2();
    // print
    // solve();  // return 0;
    // sieve();
    for (int i = 0; i < pr.size(); i += 100) {
      print(pr[i]);
    }
    // print(pr[0]);
    // print(pr.back());
    // print(pr.size());
    // print(pr[100]);
    // print(pr[200]);
    // auto t2 = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
    // cout << "    time: " << duration.count() << " ms" << endl;

  return 0;
}