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
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define yesif(flag) cout << ((flag) ? "YES" : "NO")
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

typedef long long       ll;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<int>     vi;
typedef vector<ll>      vll;
typedef vector<pii>     vpii;
typedef vector<pll>     vpll;
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

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...) 
#endif

void solve() {
    int n, q; scan(n, q);
    int type, indx = 0, x, unread = 0, t, cnt;
    queue<pii> Q;
    vector<queue<int>> vq(n + 1);
    vi mark(q + 1, 0);

    rep(q) {
        scan(type);
        if (type == 1) {
            scan(x);
            unread++;
            Q.push({indx, x});
            vq[x].push(indx);
            indx++;
            print(unread);
        }
        if (type == 2) {
            scan(x);
            cnt = 0;
            while (!vq[x].empty()) {
                if (mark[vq[x].front()] == 0)
                    cnt++;
                mark[vq[x].front()] = 1;
                vq[x].pop();
            }
            unread -= cnt;
            print(unread);
        }
        if (type == 3) {
            scan(t);
            cnt = 0;
            while (Q.empty() == false and Q.front().first < t) {
                int tempI = Q.front().first, tempX = Q.front().second;
                if (mark[tempI] == 0) {
                    cnt++;
                }
                if (!vq[tempX].empty() and vq[tempX].front() == tempI)
                    vq[tempX].pop();
                mark[tempI] = 1;
                Q.pop();
            }
            unread -= cnt;
            print(unread);
        }
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