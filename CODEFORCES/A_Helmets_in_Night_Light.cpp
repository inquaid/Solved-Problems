#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// less_equal, greater, greater_equal
// order_of_key(k) : no. of elements < k
// *find_by_order(i) : value at index i (0-based)

#define sp " "
#define newline cout << "\n"
#define yes cout << "YES"
#define no cout << "NO"
// #define ll long long
#define int long long
#define yesif(flag) cout << ((flag) ? "YES" : "NO")
#define all(a)  a.begin(), a.end()

template<typename T>
void sort_unique(vector<T> &vec){
    sort(vec.begin(),vec.end());
    vec.resize(unique(vec.begin(),vec.end())-vec.begin());
}

// #define dattebayo
#ifdef dattebayo
#define bug(...) cerr << "#" << __LINE__ << ' ' << #__VA_ARGS__ << "- ", _do(__VA_ARGS__)
template<typename T> void _do(vector<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(unordered_set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename K, typename V> void _do(map<K, V> x){for(auto [key, value] : x) cerr << "{" << key << ": " << value << "} "; cerr << "\n";}
template<typename T> void _do(T && x) {cerr << x << endl;}
template<typename T, typename ...S> void _do(T && x, S&&...y) {cerr << x << ", "; _do(y...);}
#else
#define bug(...) 777771449
#endif

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<int> a(n), b(n);
        map<int, int> mp;
        for (auto &i : a)
            cin >> i;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            mp[temp] += a[i];
        }
        int res = p;
        int need = n - 1;
        bug(mp);
        for (auto i : mp) {
            if (i.first >= p) {
                break;
            }
            int possible = min(i.second, need);
            need -= possible;
            res += (possible * i.first);
            if (need < 1)
                break;
        }
        if (need > 0)
            res += (need * p);
        cout << res;
        newline;
    }
}

void solve() { 
    tTestCase(); 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r" , stdin);
    //freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();

    return 0;
}