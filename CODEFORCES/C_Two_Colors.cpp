#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <math.h>
#include <climits>
#include <bitset>

#define int long long
#define all(x) (x).begin(), (x).end()

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p) {
    return is >> p.first >> p.second;
}

template <typename T> istream &operator>>(istream &is, vector<T> &v) {
    for (auto &elem : v)
        is >> elem;
    return is;
}

template <typename T, typename Y>
ostream &operator<<(ostream &os, const pair<T, Y> &p) {
    os << p.first << " " << p.second;
    return os;
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &v) {
    for (size_t i = 0; i < v.size(); ++i) {
        os << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    return os;
}

template <typename T> ostream &operator<<(ostream &os, const set<T> &s) {
    auto it = s.begin();
    while (it != s.end()) {
        os << *it;
        if (++it != s.end())
            os << " ";
    }
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, const unordered_set<T> &s) {
    bool first = true;
    for (const auto &elem : s) {
        if (!first)
            os << " ";
        os << elem;
        first = false;
    }
    return os;
}

template <typename T> void sort_unique(vector<T> &vec) {
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

template <class... T> void scan(T &...args) { (cin >> ... >> args); }

template <typename T> void print(const T &value) { cout << value << "\n"; }

template <typename T, typename... Args>
void print(const T &first, const Args &...rest) {
    cout << first;
    if constexpr (sizeof...(rest) > 0) {
        cout << " ";
        print(rest...);
    } else {
        cout << "\n";
    }
}

template <typename Container> void print_container(const Container &container) {
    cout << container << "\n";
}

#define yesif(flag) cout << ((flag) ? "YES\n" : "NO\n")
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff first
#define ss second
bool comp(int a, int b) { return a > b; }

#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

vector<int> makePreSum(vector<int> &a) {
    int n = a.size();
    vector<int> preSum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        preSum[i] = preSum[i - 1] + a[i - 1];
    }
    return preSum;
} // range(l - 1, r) 1 base indexing

int pos(vi &v, int n) {
    return lower_bound(all(v), n) - v.begin();
}

void tTestCase(int t) {
    int n, m; cin >> n >> m;
    vi a(m); cin >> a;
    sort(all(a));
    for (auto &i : a) {
        i = min(i , n - 1); bug(i);
    }
    vi preSum = makePreSum(a);

    // print(preSum[m] - preSum[1]);
    int ans = 0;
    for (int i = 0; i < m - 1; ++i) {
        if(a[i] == 0) continue;
        int lb = max(i + 1, pos(a, n - a[i]));
        // bug(lb);
        if(lb < m) {
            int cnt = ( m - lb);
            int sum = (preSum.back() - preSum[lb]) - (n - a[i]) * cnt + cnt;
            // if(sum != 1) sum *= 2;
                ans += sum;
        bug((preSum.back() - preSum[lb]) -( n - a[i]));
        }
        // bug((n - a[i]) * (m - lb) );
        // bug(m - lb);
        // if(lb <= a[i]) {

        // }
        // print(sum);
        
    }
    // print("\n");
    print(ans * 2);

}

void solve() {
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        tTestCase(i);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();    return 0;
    vi v = {10,20,30,40,60,70,80};
    // print(lower_bound(all(v), 30) - v.begin());
    print(pos(v, 40));
}