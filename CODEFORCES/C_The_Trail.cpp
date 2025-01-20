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

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string path;
        cin >> path;
        vector<vector<int>> mtx(n, vector<int>(m, 0));

        int tempRowSum = 0;
        vi row, col;
        for (int i = 0; i < n; ++i) {
            tempRowSum = 0;
            for (int j = 0; j < m; ++j) {
                cin >> mtx[i][j];
                tempRowSum += mtx[i][j];
            }
            row.pb(tempRowSum);
        }
        for (int i = 0; i < m; ++i) {
            tempRowSum = 0;
            for (int j = 0; j < n; ++j) {
                // cin >> mtx[i][j];
                tempRowSum += mtx[j][i];
            }
            col.pb(tempRowSum);
        }
        int indx = 0, i = 0, j = 0;

        while (indx < path.size()) {
            if (path[indx] == 'D') {
                mtx[i][j] = -row[i];
                col[j] += -row[i];
                row[i] = 0;
                i++;
            } else {
                mtx[i][j] = -col[j];
                row[i] += -col[j];
                col[j] = 0;
                j++;
            }

            indx++;
        }
        mtx[i][j] = -row[i];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << mtx[i][j] << " ";
            }
            newline;
        }
        newline;
    }
}

void solve() { 
    tTestCase(); 
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