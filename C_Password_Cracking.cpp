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
template<typename T> void scan(vector<T> &v){for(auto &i :v) cin >> i;}
template<typename T> void print(vector<T> &v){for(auto &i :v) cout << i << " ";}

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...) 
#endif

int f(string &s1, string &s2, int &i, int n, bool first) {
    i++;
    if ((s2.size() + s1.size()) > n or i >= (2 * n)) return 0;
    cout << "? " << s1 + s2 << endl;
    int check;  cin >> check;
    if (first) {
        if (check == 1) {
            s2 = s1 + s2;
            return 1;
        } else if (s1 == "0") {
            s1 = "1";
            return f(s1, s2, i, n, first);
        } else
            return 0;
    } else {
        if (check == 1) {
            s1 = s1 + s2;
            return 1;
        } else if (s2 == "0") {
            s2 = "1";
            return f(s1, s2, i, n, first);
        } else
            return 0;
    }
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int i = 0;
        string s = "";
        while (i < (2 * n)) {
            string t = "0";
            if (f(t, s, i, n, true) == 0)
                break;
        }
        bug(i);
        while (i < (2 * n)) {
            string t = "0";
            f(s, t, i, n, false);
            bug(s);
        }
        if (s.size() != n)
            s += "1";
        cout << "! " << s << endl;
    }
}

void solve() { tTestCase(); }

int32_t main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();

    return 0;
}