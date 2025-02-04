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

int f(vi &a, vi &b, int n, int sumA, int total) {
    if(n == 0) return total - sumA == sumA;
    a.push_back(n);
    int tmp = f(a, b, n - 1, sumA + n, total);
    if(tmp) return 1;
    a.pop_back();

    b.push_back(n);
    int temp2 = f(a, b, n - 1, sumA, total);
    if(temp2) return 1;
    b.pop_back();

    return temp2 | tmp;
}

void solve() {
    int n; scan(n);
    vi a, b;
    vector<int> dp(n + 1, -1);
    int total = n * (n + 1) / 2;
    if(total % 2 == 0) {
        yes;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; ++i) {
            v.push_back({i, 0});
        }

        int res = total / 2;
        vi a1;
        int i = v.size() - 1;
        int temp = 0;
        while(i >= 0) {
            if(temp + v[i].first <= res){
                temp += v[i].first;
                v[i].second = 1;
                a1.push_back(v[i].first);
            }
            i--;
        }
        print(a1.size());
        print(a1);
        print(n - a1.size());
        for (int i = 0; i < n; ++i) {
            if(v[i].second == 0) cout << v[i].first << " ";
        }
        print();
    } else {
        no;
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