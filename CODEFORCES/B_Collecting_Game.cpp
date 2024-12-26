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
#define int long long
#define yesif(flag) cout << ((flag) ? "YES" : "NO")
#define all(a)  a.begin(), a.end()

typedef long long       ll;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<int>     vi;
typedef vector<ll>      vll;
typedef vector<pii>     vpii;
typedef vector<pll>     vpll;
typedef map<int, int>   mii;
typedef map<ll, ll>     mll;
typedef set<int>        sii;
typedef set<ll>         sll;

template<typename T> void sort_unique(vector<T> &vec){sort(vec.begin(),vec.end()); vec.resize(unique(vec.begin(),vec.end())-vec.begin());}
template<typename T> void scan(vector<T> &v){for(auto &i :v) cin >> i;}
template<typename T> void print(vector<T> &v){for(auto &i :v) cout << i << " ";}

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

void makePreSum(vi &preSum, vpii &a) {
    int n = a.size();
    preSum.push_back(0);

    for (int i = 0; i < n; ++i) {
        preSum.push_back(a[n - 1 - i].first + preSum[i]);
    }
    reverse(all(preSum));
}

bool comp(pii a, pii b) { return a.first > b.first; }
bool comp2(pii a, pii b) { return a.second < b.second; }

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vpii a;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a.push_back({temp, i});
        }

        sort(all(a), comp);

        vi preSum;
        makePreSum(preSum, a);

        vpii res;
        
        for (int i = 0; i < n; ++i) {
            int l = 0, r = i;
            int present = preSum[i];
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (a[mid].first <= present) {
                    present = preSum[mid];
                    r = mid - 1;
                    l = 0;
                } else {
                    l = mid + 1;
                }
            }
            res.push_back({n - r - 2, a[i].second});
        }
        sort(all(res), comp2);

        for (auto i : res)
            cout << i.first << " ";
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