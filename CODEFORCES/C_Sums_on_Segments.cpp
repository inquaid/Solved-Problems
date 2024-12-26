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
#define ll long long
#define int long long
#define yesif(flag) cout << ((flag) ? "YES" : "NO")
#define all(a)  a.begin(), a.end()

typedef vector<int> vi;

template<typename T>void scan(vector<T> &vec){for(auto &i : vec) cin >> i;}
template <typename T1, typename T2>void scan(vector<pair<T1, T2>> &vec) {for (auto &p : vec) {cin >> p.first >> p.second;}}
template <typename T>void scan(set<T> &s,int n){for (int i = 0; i < n; ++i) {T value;cin >> value;s.insert(value);}}


template<typename T> void sort_unique(vector<T> &vec){sort(vec.begin(),vec.end()); vec.resize(unique(vec.begin(),vec.end())-vec.begin());}

// #define dattebayo
#ifdef dattebayo
#define bug(...) cerr << "#" << __LINE__ << ' ' << #__VA_ARGS__ << "- ", _do(__VA_ARGS__)
template<typename T> void _do(vector<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename T> void _do(unordered_set<T> x){for(auto i: x) cerr << i << ' ';cerr << "\n";}
template<typename K, typename V> void _do(map<K, V> x){for(auto [key, value] : x) cerr << "{" << key << ": " << value << "} "; cerr << "\n";}
template<typename T> void _do(T && x) {cerr << x << endl;}
template<typename T, typename ...S> void _do(T && x, S&&...y) {cerr << x << ", "; _do(y...);}
template<typename T, typename U> void _do(pair<T, U> p) {cerr << "{" << p.first << ", " << p.second << "} ";}
#else
#define bug(...) 777771449
#endif

pair<int, int> maxSubarraySum(vi &v) {
    int res = v[0], resMin = v[0];
    int maxEnding = v[0], minEnding = v[0];
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        maxEnding = max(maxEnding + v[i], v[i]);
        res = max(res, maxEnding);
        minEnding = min(minEnding + v[i], v[i]);
        resMin = min(resMin, minEnding);
    }
    return {resMin, res};
}

void print(vi &v){
    for(auto i : v) cout << i << sp;
    cout << endl;
}

void push(set<int> &st, pair<int, int> &pr) {
    for (int i = pr.first; i <= pr.second; ++i) {
        st.insert(i);
    }
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        scan(v);
        int pos = -1, val = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i] != 1 and v[i] != -1) {
                pos = i;
                val = v[i];
                v[i] = 0;
                break;
            }
        }
        set<int> st;
        if (pos != -1) {
            vi firstHalf(v.begin(), v.begin() + pos);
            vi secondHalf(v.begin() + pos + 1, v.end());

            if (firstHalf.empty() and secondHalf.empty()) {

            } else if (firstHalf.empty()) {
                pair<int, int> pr = maxSubarraySum(secondHalf);
                push(st, pr);

            } else if (secondHalf.empty()) {
                pair<int, int> pr = maxSubarraySum(firstHalf);
                push(st, pr);
            } else {
                pair<int, int> pr1 = maxSubarraySum(firstHalf);
                pair<int, int> pr2 = maxSubarraySum(secondHalf);
                pair<int, int> prF = {min(pr1.first, pr2.first),
                                      max(pr1.second, pr2.second)};
                push(st, prF);
            }

            int mn = 0, mx = 0;

            int i = pos - 1;
            int temp = 0;
            while (i >= 0) {
                temp += v[i];
                mn = min(mn, temp);
                mx = max(mx, temp);
                i--;
            }

            i = pos + 1;
            int mn2 = 0, mx2 = 0;
            temp = 0;
            while (i < n) {
                temp += v[i];
                mn2 = min(mn2, temp);
                mx2 = max(mx2, temp);
                i++;
            }
            i = mn + mn2;
            int j = mx + mx2;
            while (i <= j) {
                st.insert(i + val);
                i++;
            }
        } else {
            pair<int, int> pr = maxSubarraySum(v);
            push(st, pr);
        }
        st.insert(0);
        cout << st.size() << endl;
        for (auto i : st)
            cout << i << sp;
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