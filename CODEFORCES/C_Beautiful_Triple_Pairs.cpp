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
bool comp(tuple<int,int,int> a, tuple<int,int,int> b) { 
    if(get<0>(a) == get<0>(b) and get<1>(a) != get<1>(b) and get<2>(a) == get<2>(b)) return false;
    if(get<0>(a) != get<0>(b) and get<1>(a) == get<1>(b) and get<2>(a) == get<2>(b)) return false;
    if(get<0>(a) == get<0>(b) and get<1>(a) == get<1>(b) and get<2>(a) != get<2>(b)) return false;
    return true;
}

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...) 
#endif

void tTestCase(int t) {
    int n; scan(n);
    vi a(n); scan(a); 
    map< tuple<int, int, int>, int> mp, mainMp;
    vector<tuple<int, int, int>> vtp;
    rep(i, n - 2) {
        mainMp[{a[i], a[i + 1], a[i + 2]}]++;
        mp[{a[i], a[i + 1], 0}]++;
        mp[{a[i], 0, a[i + 2]}]++;
        mp[{0, a[i + 1], a[i + 2]}]++;
    } 
    int res = 0;
    for(auto i : mainMp) {
        int a = get<0>(i.ff), b = get<1>(i.ff), c = get<2>(i.ff);
        int cnt = 0;
        if(mp.find({a, b, 0}) != mp.end()) cnt += mp[{a, b, 0}]- i.ss ;
        if(mp.find({a, 0, c}) != mp.end()) cnt += mp[{a, 0, c}]- i.ss ;
        if(mp.find({0, b, c}) != mp.end()) cnt += mp[{0, b, c}]- i.ss ;
        bug(cnt);
        res += (cnt ) * i.ss ;
    } 
    print(res / 2);
}

void solve() {
    int t;
    scan(t);
    while (t--) {
        tTestCase(t);
    }
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