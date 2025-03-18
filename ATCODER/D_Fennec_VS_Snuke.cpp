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

#define yesif(flag) cout << ((flag) ? "Fennec\n" : "Snuke\n")
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

const int N = 1e5 + 50;
vector<int> g[N];

vector<int> bfs(int s, int n) {
    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n + 1), p(n + 1);
    q.push(s);
    used[s] = 1;
    while(q.size()) {
        int v = q.front(); q.pop();
        for(auto u : g[v]) {
            if(!used[u]) {
                used[u] = 1;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    return d;
}


void tTestCase(int t) {
    int n;
    scan(n);
}

void solve() {
    int n; cin >> n;
    for (int i = 1; i < n; ++i) {
        int a, b; cin >> a >> b;
        g[a].push_back(b); g[b].push_back(a);
    }
    vi dist1 = bfs(1, n);
    // print(dist);
    vi dist2 = bfs(n, n);
    // print(dist2);
    int f = 0, s = 0;
    for (int i = 1; i <= n; ++i) {
        if(dist1[i] <= dist2[i]) f++;
        else s++;
    }
    yesif(f > s);
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