#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <bitset>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <climits>
#include <iterator>
#include <cmath>
#include <utility>
#include <cstdint>
#include <iterator>
#include <ios>
#include <iomanip>
#include <limits>
#include <typeinfo>
#include <cxxabi.h>
#include <cstring>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

// template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

/**
 *  less_equal, greater, greater_equal
 *  order_of_key(k) : no. of elements < k
 *  find_by_order(i) : value at index i (0-based)
**/

#define sp " "
#define newline cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define int long long
#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define all(a)  a.begin(), a.end()
#define pb(a) push_back(a)
#define rep1(a)           for(int i = 0; i < a; i++)
#define rep2(i, a)        for(int i = 0; i < a; i++)
#define rep3(i, a, b)     for(int i = a; i < b; i++)
#define rep4(i, a, b, c)  for(int i = a; i < b; i += c)
#define overload_rep(a, b, c, d, e, ...) e
#define rep(...) overload_rep(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep1(a)          for (int i = (a)-1; i >= 0; --i)
#define rrep2(i, a)       for (int i = (a)-1; i >= 0; --i)
#define rrep3(i, b, a)    for (int i = (b)-1; i >= (a); --i)
#define rrep4(i, b, a, c) for (int i = (b)-1; i >= (a); i -= (c))
#define overload_rrep(a, b, c, d, e, ...) e
#define rrep(...) overload_rrep(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define trav(a, x) for(auto &a : x)
#define ff first
#define ss second
#define TYPE(x) { int status; char* demangled = abi::__cxa_demangle(typeid(x).name(), 0, 0, &status); std::cout << #x << " -> " << (status == 0 ? demangled : typeid(x).name()) << std::endl; free(demangled);}

typedef long long       ll;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<int>     vi;
typedef vector<ll>      vll;
typedef vector<pii>     vpii;
typedef vector<pll>     vpll;
typedef vector<vector<int>> vvi;
typedef map<int, int>   mii;
typedef map<ll, ll>     mll;
typedef set<int>        si;
typedef set<ll>         sl;

template<typename T> void sort_unique(vector<T> &vec){sort(vec.begin(),vec.end()); vec.resize(unique(vec.begin(),vec.end())-vec.begin());}
template<class... T> void scan(T&... a){(cin >> ... >> a);}
template<typename T> void scan(vector<T> &v){for(auto &i :v) cin >> i;}
template<typename T> void print(vector<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(set<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(unordered_set<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(T && x) {cout << x << "\n";}
template<typename T, typename... S> void print(T && x, S&&... y) {cout << x << ' ';print(y...);}
void print(){cout << "\n";}
bool comp(int a, int b) { return a > b;}

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...) 
#endif

void tTestCase(int t) {
    int n;
    scan(n);
}


const int N = 105, CAPACITY = (int)1e5 + 10;
int dp[N][CAPACITY];
int f(vi &wt, vi &val, int capacity, int n) {
    if(n == 0 or capacity == 0) return 0;

    if(dp[n][capacity] != -1) return dp[n][capacity];

    if(wt[n - 1] <= capacity) {
        dp[n][capacity] = max(val[n - 1] + f(wt, val, capacity - wt[n - 1], n - 1), f(wt, val, capacity, n - 1));
    }else{
        dp[n][capacity] = f(wt, val, capacity, n - 1);
    }
    return dp[n][capacity];
}

int f2(int n, int w, vi& wt, vi&v){
    int dp[n + 1][w + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= w; ++j) {
            if(i == 0 or j == 0) {dp[i][j] = 0;}
            else if(wt[i - 1] <= j) {
                dp[i][j] = max(v[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][w];
}

void solve() {
    memset(dp, -1, sizeof(dp));
    
    int n, w; scan(n, w);
    vi wt, v;
    rep(i, n) {
        int a, b; scan(a, b);
        wt.push_back(a); v.push_back(b);
    }
    // print(f(wt, v, w, n));
    print(f2(n, w, wt, v));

    // print(cnt);

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();

    return 0;
}