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

#define dattebayo
#ifdef dattebayo
#define bug(...) cerr << "#" << __LINE__ << ' ' << #__VA_ARGS__ << " = ", _do(__VA_ARGS__)
template<typename T> void _do(vector<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(unordered_set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename K, typename V> void _do(map<K, V> x){for(auto [key, value] : x) cerr << "{" << key << ": " << value << "} "; cerr << "\n";}
template<typename T> void _do(T && x) {cerr << x << endl;}
template<typename T, typename ...S> void _do(T && x, S&&...y) {cerr << x << ", "; _do(y...);}
template<typename T> void _do(vector<pair<T,T>> x) {for(auto [first, second] : x) cerr << "\n{" << first << ", " << second << "}"; cerr << "\n"; }
#else
#define bug(...) 777771449
#endif

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int l, r;
        vi a;
        a.pb(0);
        for (int i = 1; i < n; ++i) {
            cout << "? " << 1 << " " << i + 1;
            cout << endl;
            int check;
            cin >> check;
            a.pb(check);
        }
        if (a.back() == 0) {
            cout << "! IMPOSSIBLE" << endl;
        } else {
            string s(n, '1');
            for (int i = a.size() - 1; i > 0; --i) {
                if (a[i] == a[i - 1]) {
                    s[i] = '0';
                } else if (a[i - 1] == 0) {
                    int j = i - 1;
                    while (a[i]) {
                        s[j] = '0';
                        j--;
                        a[i]--;
                    }
                    break;
                }
            }
            cout << "! " << s << endl;
        }
    }
}


void solve() { 
    tTestCase(); 
}

int32_t main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    //freopen("input.txt", "r" , stdin);
    //freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();
    return 0;
}