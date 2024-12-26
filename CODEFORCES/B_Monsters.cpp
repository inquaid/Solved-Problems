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
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef map<int, int>   mii;
typedef map<ll, ll>     mll;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<pii>     vpii;
typedef vector<pll>     vpll;
typedef set<int>        si;
typedef set<ll>         sl;
typedef multiset<int>   msi;
typedef multiset<ll>    msl;

template<typename T>
void sort_unique(vector<T> &vec){
    sort(vec.begin(),vec.end());
    vec.resize(unique(vec.begin(),vec.end())-vec.begin());
}

#define dattebayo
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

bool comp(pii a, pii b) {
    if (a.first != b.first) {
        return a.first > b.first;
    }

    return a.second < b.second;
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vpii a;

        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            temp %= k;
            if (temp == 0)
                temp = k;
            a.push_back({temp, i + 1});
        }
        sort(a.begin(), a.end(), comp);

        for (auto i : a) {
            cout << i.second << " ";
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
    //freopen("input.txt", "r" , stdin);
    //freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();

    return 0;
}