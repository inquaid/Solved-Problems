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

#define int long long
#define all(x) (x).begin(), (x).end()

using namespace std;
using vi = vector<int>;

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
bool comp(vector<int> a, vector<int> b) { 
    return a[0] < b[0];    
}
bool comp2(vector<int> a, vector<int> b) { 
    return a[1] < b[1];    
}
bool mst(vector<int> a, vector<int> b) { 
    return a[2] < b[2];    
}
#ifdef LOCAL
#include "debug.h"
#else
#define bug(...)
#endif

map<int, int> p, sz;

void make_set(int v) {
    p[v] = v;
    sz[v] = 1;
}

int find_set(int v) {
    if(v == p[v]) return v;
    return p[v] = find_set(p[v]);
}

void union_sets(int a, int b) {
    a = find_set(a), b = find_set(b);
    if(a != b) {
        if(sz[a] < sz[b]) {
            swap(a, b);
        }
        p[b] = a;
        sz[a] += sz[b];
    }
}

void solve() {
    int n; cin >> n;
    vector<vector<int>> v;
    vector<vector<int>> v2;
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        v.push_back({x, y, i});
        v2.push_back({x, y, i});
    }
    sort(all(v), comp);
    sort(all(v2), comp2);
    vector<vector<int>> adj, adj2;
    for (int i = 0; i < n - 1; ++i) {
        adj.push_back({v[i][2], v[i + 1][2], min(abs(v[i][0] - v[i + 1][0]),abs(v[i][1] - v[i + 1][1]))});
        adj.push_back({v2[i][2], v2[i + 1][2], min(abs(v2[i][0] - v2[i + 1][0]),abs(v2[i][1] - v2[i + 1][1]))});
        make_set(i);
        make_set(i + 1);
    }
    sort(all(adj), mst);
    int ans = 0, ans1 = 0;
    for (int i = 0; i < adj.size(); ++i) {
        int a = adj[i][0], b = adj[i][1], cost = adj[i][2];
        if(find_set(a) != find_set(b)) {
            union_sets(a, b);
            ans += cost;
        }
    }
    print(ans);
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