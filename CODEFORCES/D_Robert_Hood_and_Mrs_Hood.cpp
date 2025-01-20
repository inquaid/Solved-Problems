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
using namespace std;

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

void print(priority_queue<pair<int, int>, vector<pair<int, int>>,
                          greater<pair<int, int>>>
               pq) {
    while (pq.empty() == false) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
}
void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        vpii points;
        for (int i = 0; i < k; ++i) {
            int a, b;
            cin >> a >> b;
            points.push_back({a, b});
        }
        sort(all(points));

        bug(points);
        priority_queue<int, vector<int>, greater<int>> pq;
        int indx = 0;
        int res1 = 0, res2 = 0;
        int temp1 = 0, temp2 = INT64_MAX;
        for (int i = 1; i <= n - d + 1; ++i) {
            int endPoint = i + d - 1;
            while (indx < k and points[indx].first <= endPoint) {
                pq.push(points[indx].second);
                indx++;
            }
            while (!pq.empty() and pq.top() < i) {
                pq.pop();
            }

            int total = pq.size();
            bug(i, endPoint, total);
            if (temp1 < total) {
                temp1 = total;
                res1 = i;
            }
            if (temp2 > total) {
                temp2 = total;
                res2 = i;
            }
        }
        cout << res1 << " " << res2;
        newline;
    }
}

void solve() { tTestCase(); }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}